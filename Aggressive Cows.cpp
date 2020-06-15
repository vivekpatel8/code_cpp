#include<iostream>
#include<algorithm>
using namespace std;
bool CowsCanBePlaced(int stall[],int n,int cows,int min_dist){
int last_cow = stall[0];
int cnt = 1;
for(int i = 1;i<n;i++){
    if(stall[i]-last_cow >= min_dist){
        last_cow = stall[i];
        cnt++;
        if(cnt ==  cows){
            return true;
        }
    }
}

return false;
}
int main(){
    int stall,cows;
    cin>>stall;
    cin>>cows;
    int stall_arr[stall];

    for(int i = 0;i<stall;i++)
        cin>>stall_arr[i];
    sort(stall_arr, stall_arr+stall);
    int l = stall_arr[0], r = stall_arr[stall - 1];
    int ans = 0;
    while(l<=r){
        int mid = (l+r)/2;
        bool canBePlaced = CowsCanBePlaced(stall_arr,stall,cows,mid);
        if(canBePlaced){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<ans;
}
