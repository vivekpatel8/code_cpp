#include<iostream>
using namespace std;
#define ll long long
#define mod 1000000007
ll f(ll n, ll m){

    ll count[n+1];
    count[0] = 0;
    for(ll i = 1;i<=n;i++){
        if(i>m)
            count[i] = ((count[i - 1] % mod )+(count[i -m] % mod))%mod;
        else if(i < m)
            count[i] = 1;
        else
            count[i] = 2;
    }
    return count[n];
}
int main(){
int t;
cin>>t;
while(t--){
ll n, m;
cin>>n>>m;
cout<<f(n, m)<<endl;
}
}
