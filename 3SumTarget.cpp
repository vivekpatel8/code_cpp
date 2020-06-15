#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int T;
cin>>T;
sort(arr,arr+n);
for(int i = 0;i<n;i++){
    int newT = T-arr[i];
int l = i+1, r =n-1;
while(l<r){
    if(newT == (arr[l]+arr[r])){
        cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
        l++;
        r--;
        continue;
    }
    if(newT<arr[l]+arr[r]){
        r--;
    }
    else{
        l++;
    }
}
}
}
