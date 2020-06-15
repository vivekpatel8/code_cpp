#include<iostream>
using namespace std;
#define ll long long int
void func(){
    ll x, y, a, b, res = 0;
    cin>>x>>y>>a>>b;
    ll r = max(x,y) - min(x,y);
    res += r*a;
    res += min(x,y)*min(2*a,b);
    cout<<res<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
func();
}
}

