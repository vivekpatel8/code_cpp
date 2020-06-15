#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
int pivot =  arr[e];
int i = s-1;
int j = s;
for(;j<e;j++){
    if(arr[j]<pivot){
        i++;
        swap(arr[j],arr[i]);
    }
}
swap(arr[i+1],arr[e]);
return i+1;

}
void quickSort(int arr[], int s, int e){
if(s>=e){
    return;
}
int p = partition(arr, s, e);
quickSort(arr, s, p-1);
quickSort(arr, p+1, e);

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
quickSort(arr, 0, n-1);
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
