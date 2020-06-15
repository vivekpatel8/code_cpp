#include<bits/stdc++.h>
using namespace std;
bool IfPossible(int arr[],int n,int s,int minPage){
    int pagesRead = 0 , studentUsed = 1;
    for(int i = 0;i<n;i++){
        if(pagesRead + arr[i] > minPage){
            studentUsed++;
            pagesRead = arr[i];
            if(studentUsed > s){
                return false;
            }
        }
        else{
            pagesRead += arr[i];
        }
    }
    return true;
}
int main(){
int T,NBook,Student;
cin>>T;
while(T--){
    cin>>NBook;
    cin>>Student;
    int arr[NBook];
    int r = 0;
    for(int i = 0;i<NBook;i++){
        cin>>arr[i];
        r += arr[i];
    }
    int l = arr[NBook-1];
    int ans = INT_MAX;
    while(l<=r){
        int mid = (l+r)/2;
        bool yes = IfPossible(arr,NBook,Student,mid);
        if(yes){
            r = mid-1;
            ans = min(ans,mid);
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans<<endl;
}
}
