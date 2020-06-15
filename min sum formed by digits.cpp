#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int * arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int a = 0, b = 0;
    for(int i = 0;i<n;i++){
        if(i % 2){
            b *= 10;
            b += arr[i];
        }
        else{
            a *= 10;
            a += arr[i];
        }
    }
    cout<<a+b<<endl;
}
}
