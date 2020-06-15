#include <bits/stdc++.h>
using namespace std;

int main(){
int n, m;
cin>>n>>m;
int arr[n][m];

for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
cin>>arr[i][j];
}}

for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        if(i == 0 && j == 0){
            continue;
        }
        else if(i == 0){
            arr[i][j] += arr[i][j-1];
        }
        else if(j == 0){
            arr[i][j] += arr[i-1][j];
        }
        else{
            arr[i][j] += min(arr[i-1][j], arr[i][j-1]);
        }
    }
}
cout<<arr[n-1][m-1];
}
