#include<iostream>
using namespace std;

void BS(int arr[],int n){
for(int itr = 0 ;itr<n;itr++){
    for(int j = 0;j<(n-itr-1);j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
}
int main(){
int arr[] = {5,54,65,46,465};
BS(arr,5);
for(int i = 0;i<5;i++){
    cout<<arr[i]<<endl;
}
}
