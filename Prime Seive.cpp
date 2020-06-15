#include<iostream>
using namespace std;
#define ll long long
void primeSeive(bool P[]){


for(ll i = 3 ;i<=1000000;i+=2){
    P[i] = 1;
}
for(ll i = 3;i<=1000000;i+=2){
    if(P[i] == 1){
        for(ll j = i*i;j<= 1000000;j =j +i){
            P[j] = 0;
        }
    }
}
P[2] = 1;
P[1] = P[0] = 0;

}
int main(){
    bool P[1000005] = {0};
    primeSeive(P);
    for(ll i = 0;i<1000000;i++){
    if(P[i] == 1){
        cout<<i<<" ";
    }
}
}
