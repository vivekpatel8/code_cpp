#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[100000];
for(int i = 0;i<100;i++){
    arr[i] = -1;
}
int n;
cin>>n;
arr[1] = 0;
int ans = 0;
// n = 6
for(int i = 2 ;i<=n;i++){
        int a , b , c;
        a = b = c = INT_MAX;
        if( i % 2 == 0){
            b = arr[i / 2];
        }
        if( i % 3 == 0){
            c = arr[i / 3];
        }
        a = arr[i-1];
        arr[i] = min(a, min(b, c)) + 1;
}
cout<<arr[n]<<endl;
}
