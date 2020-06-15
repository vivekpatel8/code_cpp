#include<iostream>
using namespace std;
#define siz 1000000
#define ll long long
void PrimeSieve(bool arr[]){
for(ll i = 3;i<=siz;i+=2){
    arr[i] = 1;
}
for(ll i = 3;i<=siz;i+=2){
  if(arr[i] == 1){
          for(ll j = i*i;j<=siz;j+=i){
            arr[j] = 0;
        }
    }
}
arr[2] = 1;
arr[0] = arr[1] = 0;
}
int main(){
bool arr[siz+5] = {0};
PrimeSieve(arr);
int t;
cin>>t;
while(t--){
int l , r;
cin>>l>>r;
int c = 0;
for(int i = l;i<=r;i++){
    if(arr[i] == 1){
    c++;
    }
}
cout<<c<<endl;
}}
