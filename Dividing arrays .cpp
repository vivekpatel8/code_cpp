#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int N = n / 2;
    int A[N];
    int B[N];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    // for max
    ll minans = 0, maxans = 0;
    for(int i = 0;i<N;i++){
        maxans += abs(arr[i] - arr[i+N]);
    }
    int a = 0, b = 0;
    for(int i = 0;i<n;i++){
        if(i % 2 == 0){
            A[a] = arr[i];
            a++;
        }
        else{
            B[b] = arr[i];
            b++;
        }
    }
    for(int i = 0;i<N;i++){
        minans += abs(A[i] - B[i]);
    }
    cout<<minans<<" "<<maxans<<endl;

}
}
