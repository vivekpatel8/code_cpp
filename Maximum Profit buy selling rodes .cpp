#include<bits/stdc++.h>
using namespace std;

// top down approach

int maxProfit(int * prices, int n, int * dp){
if(n == 0)return 0;

if(dp[n]  != 0)return dp[n];

int maxans = 0;
for(int i = 1;i<=n;i++){
        int x = prices[i] + maxProfit(prices, n-i, dp);
        maxans = max(maxans, x);
}

dp[n] = maxans;
return dp[n];
}

int maxProfitBottomUp(int * arr, int n, int * dp){

for(int i = 1;i<=n;i++){
        int ans = 0;
    for(int j = 1;j<=i;j++){
        ans =  max(ans ,arr[j] + dp[i-j]);
    }
    dp[i] = ans;
}
return dp[n];
}

int main(){
int n;
cin>>n;
int prices[n+1];
int dp[100] = {0};

for(int i = 1;i<=n;i++)cin>>prices[i];

cout<<maxProfitBottomUp(prices, n, dp);
}
