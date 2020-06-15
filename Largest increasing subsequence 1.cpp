#include<bits/stdc++.h>
using namespace std;

void lis(int * arr, int n){
    int dp[100] ;
for(int i = 0 ;i<n;i++){
        dp[i] = 1;
    for(int j = 0;j<i;j++){
        if(arr[j] < arr[i]){
            dp[i] = max(dp[i], dp[j] + 1);
        }
    }
}
for(int i = 0;i<n;i++){
    cout<<dp[i]<<" ";
}
}

void lis2(int * arr, int n){

int dp[n+1] ;
for(int i = 1;i<=n;i++)dp[i] = INT_MAX;
dp[0] = INT_MIN;
//dp[j] < arr[i] && arr[i] < dp[j+1] at dp[i] i is length dp[i] is best possible value
for(int i = 0;i<n;i++){
    for(int j = 0 ;j<n;j++){
        if(dp[j] < arr[i] && arr[i] < dp[j+1]){
        dp[j + 1] = arr[i];
        }
    }
}

for(int i = 1;i<=n;i++){
    if(dp[i] != INT_MAX)
    cout<<dp[i]<<" ";

}

}

// lis using binary search

void lis3(int *arr, int n){
    int dp[n+1] ;
for(int i = 1;i<=n;i++)dp[i] = INT_MAX;
dp[0] = INT_MIN;
for(int i = 0;i<n;i++){
        int len = upper_bound(dp, dp+n, arr[i]) - dp;
        if(dp[len -1 ] < arr[i] && arr[i] < dp[len]){
            dp[len] = arr[i];
        }
}

for(int i = 1;i<=n;i++){
    if(dp[i] != INT_MAX)
    cout<<dp[i]<<" ";
}

}


int main(){
int n;
cin>>n;
int arr[n];

for(int i = 0;i<n;i++){
    cin>>arr[i];
}

lis3(arr, n);
}
