#include<iostream>
using namespace std;

void BubbleSortR(int arr[], int j, int n){
    if(n == 1){
        return;
    }
    if(j == n-1){
        return BubbleSortR(arr,0, n-1);
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
    }
    BubbleSortR(arr, j+1, n);
}
int main(){
int arr[] = {1, 4, 3, 2 , 6};
BubbleSortR(arr, 0, 5);
for(int i =0;i<5;i++){
    cout<<arr[i]<<" ";
}
}
