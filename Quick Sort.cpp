#include<iostream>
using namespace std;
int partition(int arr[], int l, int r){
int j = l;
int i = l-1;
int pivot = arr[r-1];
for(;j<r-1;j++){
    if(arr[j]<pivot){
        i++;
        swap(arr[j], arr[i]);
    }
}
swap(arr[i+1], arr[r-1]);
return i+1;
}
void quickSort(int arr[], int l, int r){
if(l>=r){
    return;
}
int p  = partition(arr, l, r);
quickSort(arr, l, p-1);
quickSort(arr, p+1, r);
}
int main(){
int arr[] = {5 , 3 ,2 , 6 ,4};
quickSort(arr, 0, 5);
for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
}
}
