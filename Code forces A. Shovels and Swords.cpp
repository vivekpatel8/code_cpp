#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll a, ll b){
if(a == 0 || b == 0){
    return 0;
}
else{
    if(a == b){
        return (a + b)/3;
    }
    else if(a < b){
        ll ans = 0;
        while(a > 0 && b > 0){

        }

    }
    else{

    }
}
}


int main(){
int t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    cout<<f(a, b)<<endl;
}
}
