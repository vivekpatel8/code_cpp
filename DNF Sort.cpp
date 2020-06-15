#include<iostream>
using namespace std;
void DNFSort(int arr[],int n ){
int s = 0;
int mid = 0;
int e = n-1;
while(mid<=e){
    if(arr[mid] == 0){
        swap(arr[mid], arr[s]);
        s++;
        mid++;
    }
    if(arr[mid] == 1){
        mid++;
    }
    if(arr[mid] == 2){
        swap(arr[mid], arr[e]);
        e--;
    }
}
return ;
}
int main(){

int arr[] = {0, 1 , 2 , 2 , 1, 2, 1, 0, 0, 0};
int len = sizeof(arr)/sizeof(int);
DNFSort(arr, len);
for(int i = 0;i<len;i++){
    cout<<arr[i];
}
}
