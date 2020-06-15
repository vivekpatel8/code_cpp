#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[10000];
int dp[10002][10002];

ll f(ll i, ll j,ll sum){
if(i + 1 == j)return max(arr[i], arr[j]);

if(dp[i][j] != -1)return dp[i][j];

return dp[i][j] = max(sum - f(i+1, j, sum - arr[i]), sum - f(i, j-1, sum - arr[j]));
}

int main() {
	ll n;
	cin>>n;
	for(int i = 0;i<n;i++)cin>>arr[i];
	ll sum = 0;
	for(int i  = 0;i<n;i++)sum+=arr[i];
	memset(dp, -1, sizeof(dp));
	cout<<f(0, n-1, sum);
	return 0;
}
