#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void IndexsOfM(int arr[], int n, int m, int i , int & k){
if(i == n){
    return;
}
if(arr[i] == m){
    arr[k] = i;
IndexsOfM(arr,n,m,i+1,k+1);
}
else{
    IndexsOfM(arr,n,m,i+1,k);
}
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}
int m;
cin>>m;
vector <int> l1;
int k;
IndexsOfM(arr, n, m, 0, 0);
for(int i = 0;i<k;i++){
    cout<<arr[i]<<" ";
}
}
