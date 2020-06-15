#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, unordered_map<ll, ll> &um){
if(um.count(n)){
    return um[n];
}

if(n < 12){
    return n;
}

return um[n] = solve(n/2, um) + solve(n/3, um) + solve(n/4, um);

}

int main(){
ll n;
cin>>n;
unordered_map <ll, ll> um;
cout<<solve(n, um);
}
