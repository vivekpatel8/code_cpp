#include <iostream>
using namespace std;
int Find(int arr[], int n, int k){
int l = 0, r = n-1, mid;
while(l<=r){
    mid = (l+r)/2;
    if(arr[mid] == k){
        return mid;
    }
    else if(arr[l] <= arr[mid]){
        if(k>=arr[l] && k<= arr[mid]){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    else{
        if(k <= arr[r] && k >= arr[mid]){
            l = mid +1;
        }
        else{
            r = mid -1;
        }
    }
}
return -1;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int k;
cin>>k;

cout<<Find(arr,n,k);
}
