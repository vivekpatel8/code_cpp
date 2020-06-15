#include<iostream>
using namespace std;
void waveSort(int arr[], int n){

for(int i = 0;i<n;i+=2){
    if(i !=0 && arr[i-1]> arr[i]){
        swap(arr[i-1], arr[i]);
    }
    if(i != (n-1) && arr[i] < arr[i+1] ){
        swap(arr[i], arr[i+1]);
    }
}
}
int main(){
int arr[] = {4, 3  , 2 , 7 , 6};
int len = sizeof(arr)/sizeof(int);
waveSort(arr, len);
for(int i = 0;i<len;i++){
    cout<<arr[i];
}
}
