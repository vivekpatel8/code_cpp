#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size 87028121
void Prime_Sevive(ll arr[]){
for(ll i = 3;i<=size;i+= 2){
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
int idx = 1;
for(int i = 2;i<=size;i++){
    if(arr[i] == 1){
        arr[idx] = i;
        idx++;

    }
}
}
int main() {
	ll n;
	cin>>n;
	ll * arr = new ll [size+5]{0};
	Prime_Sevive(arr);
	cout<<arr[n];
	return 0;
}
























