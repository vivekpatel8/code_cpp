#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n){
if(n == 0){
    return true;
}
if(arr[n-1] > arr[n]){
    return false;
}
checkSorted(arr, n-1);
}

int main(){

int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
if(checkSorted(arr, n))
    cout<<"Sorted";
else
    cout<<"Not sorted";
}
