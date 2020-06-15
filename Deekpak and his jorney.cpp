#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    ll p, nd;
    ll mincost = LONG_MAX;
    ll tcost = 0;
    for(int i = 0;i<n;i++){
        cin>>p>>nd;
        mincost = min(mincost, p);
        tcost += (mincost * nd);
    }
    cout<<tcost<<endl;
}
}
