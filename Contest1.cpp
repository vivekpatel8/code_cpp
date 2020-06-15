#include<iostream>
using namespace std;
#define ll long long int
void func(){
    ll x, y, a, b, doller = 0,minn, maxn, left;
    cin>>x>>y>>a>>b;
    if(x== 0 && y ==0){
        doller = 0;
    }
    else if(x == 0 && y >0){
        doller = y * a;

    }
    else if(x>0 && y==0){
        doller  = x * a;
    }
    else if(x == y){
        doller = x * b;
    }
    else{
        minn =  min(x, y);
        maxn = max(x, y);
        left = maxn - minn;
        doller =  (minn * b) + (left * a);
    }
    cout<<doller<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
func();
}
}
