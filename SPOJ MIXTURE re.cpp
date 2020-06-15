#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[102][102] ;
int arr[102];

ll sum(int s, int e){
	ll ans = 0;
	for(int i =s;i<=e;i++){
		ans+=arr[i];
		ans%=100;
	}
	return ans;
}

ll solveMix(int i, int j){
	if(i>=j)return 0 ;
	if(dp[i][j]  != -1)return dp[i][j];
	dp[i][j] = INT_MAX;
	for(int k = i;k<=j;k++){
		dp[i][j] = min(dp[i][j], solveMix(i,k) + solveMix(k+1, j) + sum(i,k) * sum(k+1, j));
	}
	return dp[i][j];
}

int main() {
int n;
cin>>n;
for(int i = 0;i<n;i++){
	cin>>arr[i];
}
// always use memset very important
memset(dp, -1, sizeof(dp));
cout<<solveMix(0, n-1);
	return 0;
}


