#include<iostream>
using namespace std;
void mergeArr(int arr [],int l,int r){
int mid = (l+r)/2;
int temp[100];
int i = l, j = mid+1, k = l;
while(i<=mid && j<=r){
    if(arr[i] < arr[j]){
        temp[k++] = arr[i++];
    }
    else{
        temp[k++] = arr[j++];
    }
}
while(i<=mid){
    temp[k++] = arr[i++];
}
while(j<=r){
    temp[k++] = arr[j++];
}
for(i = l;i<=r;i++){
    arr[i] = temp[i];
}
}
void mergeSort(int arr[], int l, int r){
if(l>=r){
    return;
}
int mid = (l+r)/2;
mergeSort(arr, l, mid);
mergeSort(arr, mid+1, r);
mergeArr(arr,l,r);
}

int main(){
int arr[] = {5 , 3 ,2 , 6 ,4};
mergeSort(arr,0,4);
for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
}

}
