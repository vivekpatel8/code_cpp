#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
ll t;
cin>>t;
while(t--){
ll n, k;
cin>>n>>k;
ll sum = 0, l = -1, r = 0;

for(ll i = 0;i<n;i++){
    ll x;
    cin>>x;
    if(x % k){
        if(l == -1)
            l = i;
        r = i;
    }
    sum += x;
}
if(l == -1){
    cout<<-1<<endl;
}
else if(sum % k){
    cout<<n<<endl;
}
else{
    cout<<(n - min(l + 1, n - r))<<endl;
}
}
return 0;
}
