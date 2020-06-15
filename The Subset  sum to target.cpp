#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool dp[1000][1000];

bool subsetSum(int * arr, int n , int k){
if(n == 0 && k != 0)return false;
if(k == 0)return true;
if(dp[n][k] != false)return dp[n][k];
if(arr[n-1] > k){
    return dp[n][k] = subsetSum(arr, n-1, k);
}

return dp[n][k] = (subsetSum(arr, n-1, k - arr[n-1]) || subsetSum(arr, n-1, k));

}


int main(){
int n, k;
cin>>n>>k;
for(int i = 0;i<=k;i++)dp[0][i] = false;
//for(int i = 1;i<=n;i++)dp[i][0] = true;
dp[0][0] = true;
int arr[n];
for(int i = 0;i<n;i++)cin>>arr[i];
if(subsetSum(arr, n, k)){
    cout<<"Yes";
}
else{
    cout<<"No";
}

}
