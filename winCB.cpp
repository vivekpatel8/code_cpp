#include<iostream>
using namespace std;
#define ll long long int
bool IfPossible(ll n, ll m, ll x, ll y, ll mid){
if(mid*x <= (m+(n-mid)*y)){
    return true;
}
return false;
}
int main(){
ll n,m,x,y;
cin>>n>>m>>x>>y;
ll l,r,mid,ans;
l = 0, r = n;

while(l<=r){
    mid = (l+r)/2;
    bool yes = IfPossible(n,m,x,y,mid);
    if(yes){
        ans = mid;
        l = mid + 1;
    }
    else{
        r = mid - 1;
    }
}
cout<<ans;
}

