#include<iostream>
using namespace  std;
#define ll long long
int main(){
    int T;
    cin>>T;
while(T--){
ll n;
cin>>n;
ll prime[] =  {2, 3, 5, 7, 11, 13, 17, 19};
ll noOfSubSets = (1<<8)-1;
ll ans = 0;
for(ll i = 1;i<=noOfSubSets;i++){
  ll denom = 1ll;
  ll noOfbits = __builtin_popcount(i);
  for(ll j = 0;j<=7;j++){
    if(i&(1<<j)){
        denom *= prime[j];
    }
  }
  if(noOfbits&1) {
    ans += (n/denom);
  }
  else{
    ans -= (n/denom);
  }
}
cout<<ans<<endl;
}}
