#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size 1200000

void Prime_Sevive(int arr[]){
for(int i = 3;i<=size;i+=2){
    arr[i] = 1;
}
for(ll i = 3;i<=size;i+=2){
 if(arr[i] == 1){
    for(ll j = i*i;j<=size;j+=i){
        arr[j] = 0;
    }
 }
}
arr[2] = 1;
arr[1] = arr[0] = 0;
ll idx = 1;
for(ll i = 2;i<=size;i++){
    if(arr[i] == 1){
        arr[idx] = i;
        idx++;
    }
}
}
int main(){
int *arr = new int[size+5];
int T;
cin>>T;
Prime_Sevive(arr);
while(T--){
    int n;
    cin>>n;
    cout<<arr[n]<<endl;
}
}
