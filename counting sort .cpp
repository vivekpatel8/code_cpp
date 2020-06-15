#include<iostream>
using namespace std;
void countSort(int arr[], int n){
int freq[1000005] = {0};
int largest = -1;
for(int i = 0;i<n;i++){
    largest = max(arr[i], largest);
}
for(int i = 0;i<n;i++){
    freq[arr[i]]++;
}
int j = 0;
for(int i = 0;i<=largest;i++){
    while(freq[i] > 0){
        arr[j] = i;
        freq[i]--;
        j++;
    }
}
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

int main(){
int n;
cin>>n;
int arr[1000005];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
countSort(arr,n);
}
