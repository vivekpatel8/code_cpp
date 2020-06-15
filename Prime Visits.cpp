#include<iostream>
using namespace std;
#define ll long long
void Prime_sieve(bool p[]){
    for(int i = 3;i<=100000;i+=2){
        p[i] = 1;
    }
    for(ll i = 3;i<=100000;i+=2){
            if(p[i] == 1){
        for(ll j = i*i;j<=100000;j+=i){
            p[j] = 0;
        }}
    }
    p[2] = 1;
    p[1] = p[0] = 0;
}
int main(){
int T;
cin>>T;
bool p[100005] = {0};
Prime_sieve(p);
while(T--){

int l, r ,c = 0;
cin>>l>>r;
for(ll i = l;i<=r;i++){
    if(p[i] == 1){
        c++;
    }
}
cout<<c<<endl;
}


}
