#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size 1000000
void Prime_Sevive(int arr[]){

for(int i = 3;i<=size;i+=2){
    arr[i] = 1;
}
for(ll i = 3;i<=size;i+=2){
    if(arr[i] == 1){
        for(ll j =i*i;j<=size;j+=i){
            arr[j] = 0;
        }
    }
}
arr[2] = 1;
arr[1] = arr[0] = 0;
int idx = 0;
for(ll i =2;i<=size;i++){
    if(arr[i] == 1){
        idx++;
    }
    arr[i] = idx;
}
arr[1] = 0;
}
int main(){
int T;
cin>>T;
int * arr = new int[size+5]{0};
Prime_Sevive(arr);
while(T--){
    int x, y;
    cin>>x>>y;

    int ans = arr[max(x, y)] - arr[min(x, y)];
    cout<<ans<<endl;
}
}
