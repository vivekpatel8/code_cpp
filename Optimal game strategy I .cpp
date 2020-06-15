#include <bits/stdc++.h>
using namespace std;
int dp[100][100] = {0};
int arr[100];
int f(int i, int j){
if(i>j)return 0;
if(dp[i][j] != 0)return dp[i][j];
return dp[i][j] = max(arr[i] + min(f(i+2, j), f(i+1, j-1)), arr[j] + min(f(i+1, j-1), f(i, j - 2)));
}

int main(){
int n;
cin>>n;
for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        dp[i][j] = 0;
    }
}
for(int i = 0;i<n;i++)cin>>arr[i];
cout<<f(0, n-1);
}
