#include<bits/stdc++.h>
using namespace std;

int maxProfit(int i, int j, int * arr, int y, int dp[100][100]){
if(i > j)return 0;

if(dp[i][j] != 0){
    return dp[i][j];
}

int option1 = (arr[i] * y ) + maxProfit(i+1, j, arr, y+1, dp);
int option2 = (arr[j] * y ) + maxProfit(i, j-1, arr, y+1, dp);
int ans = max(option1 , option2);
return dp[i][j] = ans;

}

int main(){
int arr[] = {1, 4, 3, 2};
int dp [100][100] = {0};
int len = sizeof(arr)/sizeof(int);
cout<<maxProfit(0, len-1, arr, 1, dp);
return 0;
}
