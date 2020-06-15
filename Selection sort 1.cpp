#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int j;
for(int i = 0;i<n-1;i++){
        int minIdx = i;
    for( j = i+1;j<n;j++){

        if(arr[minIdx]>arr[j]){
            minIdx = j;
        }

    }
    swap(arr[minIdx],arr[i]);
}
for(int i = 0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
