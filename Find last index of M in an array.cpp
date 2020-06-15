#include<iostream>
using namespace std;

int returnLastIndex(int arr[], int n , int m, int index, int i){
if(i == n){
    return index;
}
if(arr[i] == m){
    index  = i;
}
returnLastIndex(arr, n, m, index , i+1);
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int m;
cin>>m;
cout<<returnLastIndex(arr, n-1, m, -1, 0);
}
