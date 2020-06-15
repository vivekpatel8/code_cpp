#include<bits/stdc++.h>
using namespace std;

int main(){
int T;
cin>>T;
while(T--){
    long long int n;
    int k;
    cin>>n>>k;
    long long int l = 1,r = n ,ans = 0;

    while(l<=r){
long long int mid = (l+r)/2;
        if(pow(mid,k) <= n){
           ans = max(mid,ans);
            l = mid+1;
        }
        else{
            r = mid -1;
        }
    }
    cout<<ans<<endl;
}
}
