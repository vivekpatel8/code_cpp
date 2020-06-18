#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll t;
cin>>t;
while(t--){
ll a , b, n;
cin>>a>>b>>n;
/*if(a > b){
    ll ans = 1;
    b += a;
    while(b  <= n){
        b += a;
        ans++;
    }
    cout<<ans<<endl;
}
else{
    ll ans = 1;
    a += b;
    while(a <= n){
        a += b;
        ans++;
    }
    cout<<ans<<endl;
}*/
ll x = min(a, b);
ll y = max(a, b);
int ans = 0;
while(y <= n && x <= n){
    x += y;
    ans++;
    if(y <= n && x<= n){
        y+=x;
        ans++;
    }
}
cout<<ans<<endl;
}

}
