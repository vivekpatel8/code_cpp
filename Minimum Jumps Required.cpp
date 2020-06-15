#include<bits/stdc++.h>
using namespace std;

int f(int * arr, int n){
if(n == 1)return 0;

int res = INT_MAX;

for(int i = n-2;i>=0;i--){
    if(i + arr[i] >= n - 1 ){
        int sub_res = f(arr, i + 1);
        if(sub_res != INT_MAX){
            res = min(res, sub_res + 1);
        }
    }
}
return res;
}

// using dp

int minJump(int * arr, int n){
if(n == 0 || arr[0] == 0)return INT_MAX;

int jump[n];
jump[0] = 0;

for(int i = 1;i<n;i++){
    jump[i] = INT_MAX;
    for(int j = 0;j<i;j++){
        if(i <= j + arr[j] && jump[j] != INT_MAX){
            jump[i] = min(jump[i], jump[j] + 1);
            break;
        }
    }
}
return jump[n-1];
}

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)cin>>arr[i];
    cout<<minJump(arr, n)<<endl;
}
}
