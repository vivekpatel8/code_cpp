#include<bits/stdc++.h>
using namespace std;
int returnSum(int arr[],int j){
    int sum = 0;
    for(int i = 0;i<=j;i++){
        sum+= arr[i];
    }
    return sum;
}
void isZero(int arr[], int out, int i , int j , int n){
    if(i == n){
        cout<<out;
        return;
    }
    out += arr[i];
    isZero(arr, out, i+1, j+1, n);
    isZero(arr, out, i+1, j, n);
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n],out[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}
isZero(arr, 0, 0, 0, n-1);
}}
