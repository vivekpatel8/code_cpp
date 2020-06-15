#include<iostream>
using namespace std;
bool pal(int arr[],int l ,int r){
    if(l<=r){
    if(arr[l] == arr[r]){
        l++;
        r--;
        pal(arr,l,r);
        return true;
    }
    else{
        return false;

    }}
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

if(pal(arr,0,n-1))
    cout<<"true";
else
    cout<<"false";
}
