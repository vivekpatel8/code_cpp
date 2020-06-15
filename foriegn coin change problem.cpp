#include<bits/stdc++.h>
using namespace std;
// top down
int minCoinChange(int n, int * coins, int T, int * dp){
if(n == 0)return 0;
if(dp[n] != 0){
    return dp[n];
}
int ans = INT_MAX;
for(int i = 0;i<T;i++){
    if(n - coins[i] >= 0){
        int x = minCoinChange(n-coins[i], coins, T, dp);
        ans = min(ans, x +1);
    }
}
dp[n] = ans;
return dp[n];
}
// bottom up
int mincoin(int n, int * coins, int T, int * dp){
for(int i = 1 ;i<=n;i++){
    int ans =  INT_MAX;
    for(int j = 0;j<T;j++){
        if(i >= coins[j]){
            int x = dp[i - coins[j]];
            ans =  min(ans, x);
        }
    }
    dp[i] = ans+1;
}
return dp[n];
}

int main(){
int coins[3] = {1, 7, 10};
int t;
cin>>t;
int dp[100] = {0};
while(t--){
int n;
cin>>n;
cout<<mincoin(n, coins, 3, dp);
}}
