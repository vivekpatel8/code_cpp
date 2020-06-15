#include<iostream>
using namespace std;

int partion(int * arr,int s,int e){
int pivot = arr[e];
int i = s-1;
for(int j = 0;j<e;j++){
    if(arr[j] <= pivot){
        i++;
        swap(arr[i], arr[j]);
    }
}
swap(arr[i+1], arr[e]);
return i+1;
}

int kthsmallestelement(int *arr, int s, int e, int k){
if(k > 0 && k <= e - s + 1){
    int pos = partion(arr, s, e);
    if(pos - s == k-1)return arr[pos];
    if(pos - s > k-1){ // 1 //
        // 1 2 |4| 5 |6| 9 \8\ 7 10// 2 // k = 5 // pos = 6 s  = 5
        return kthsmallestelement(arr, s, pos-1, k);
    }
    return kthsmallestelement(arr, pos+1, e, k - pos + s -1);// k = 6 // pos = 4 + 1 = 5  // newk =
}
return INT_MAX;
}

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int k;
cin>>k;
cout<<kthsmallestelement(arr, 0, n-1, k)<<endl;
}}
