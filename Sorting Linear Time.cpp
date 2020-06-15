#include<iostream>
using namespace std;

int main(){
int n ;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int l = 0,mid = 0, r = n-1;
while(l<=r){
    if(arr[mid] == 0){
        swap(arr[l],arr[mid]);
        l++;
        mid++;
    }
    else if(arr[l] == 1){
        mid++;
    }
    else{
        swap(arr[mid],arr[r]);
        r--;
    }
}
for(int i = 0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
