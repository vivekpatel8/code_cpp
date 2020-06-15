#include<iostream>
using namespace std;
int searchPivot(int arr[], int n){
    int l = 0, r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid-1] > arr[mid] ){
            return mid -1;
        }
        else if(arr[l] <= arr[mid]){
            l = mid - 1;
        }
        else{
            r = mid + 1;
        }
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
cout<<searchPivot(arr, n);
}
