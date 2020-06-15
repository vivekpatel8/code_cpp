#include<iostream>
using namespace std;

int pivot(int *arr, int s, int e){
int i = s-1;
int piv = arr[e];
for(int j = s;j<e;j++){
    if(arr[j] <= piv){
        i++;
        swap(arr[i], arr[j]);
    }
}
swap(arr[i+1], arr[e]);
return i+1;
}
void quicksort(int *arr, int s, int e){
if(s<e){
    int p = pivot(arr, s, e);
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
}
}
int main(){
int arr[100];
int num;
cin>>num;
int i = 0;
while(num != -1){
    arr[i] = num;
    i++;
    cin>>num;
}
quicksort(arr, 0, i-1);
for(int j = 0;j<i;j++){
    cout<<arr[j]<<" ";
}
}
