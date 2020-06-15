#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll getT(ll a, ll b, ll c, ll d){

    if(b>=a){
        return b;
    }
    else if(d>=c){
        return -1;
    }
    else{
    ll takenRest = b;
    ll restRemaning = a - b;
    ll tim = b;
    /*while(takenRest<a){
        takenRest = takenRest + (c - d);
        tim = tim + (c);
    }*/
    /*a = a / (c - d);
    a = a * c;
    a = a - b;
    tim = a;*/
    ll ro = a - b;
    ll p = c - d;
    ll cnt = (ro/p);
    if(ro%p!= 0)cnt++;
    tim = (cnt*c)+b;
    return tim;
    }

}

int main(){
ll t;
cin>>t;
while(t--){
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<getT(a, b, c, d)<<endl;
}
}
