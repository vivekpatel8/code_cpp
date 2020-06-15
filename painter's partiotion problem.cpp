#include<iostream>
#include<limits>
using namespace std;
bool ifPossible(int arr[],int p,int b,int min_board){
    int last_board = arr[0],painterUsed = 1;
    for(int i = 1;i<b;i++){
        if(last_board + arr[i] > min_board){
            painterUsed++;
            last_board = arr[i];
            if(painterUsed > p){
                return false;
            }
        }
        else{
            last_board += arr[i];
        }
    }
    return true;
}
int main(){
    int p,b;
    cin>>p>>b;
    int arr[b],r = 0;
    for(int i = 0;i<b;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<b;i++){
        r+= arr[i];
    }
    int ans = INT_MAX,l = arr[b-1];
    while(l<=r){
        int mid = (l+r)/2;
        bool yes = ifPossible(arr,p,b,mid);
        if(yes){
            ans = min(ans,mid);
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<ans;
}
