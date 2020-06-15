#include<iostream>
#include <cstring>
using namespace std;
#define ll long long
ll arr[100000000], pre[100000000];
int main() {
	int T;
	cin>>T;
	while(T--){
	int n;
	cin>>n;
	ll sum = 0;
	memset(pre, 0, sizeof(pre));
	pre[0] = 1;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
		sum %= n;
		sum = ( sum + n )%n;
		pre[sum]++;
	}
	ll ans = 0;
	for(int i = 0;i<n;i++){
		ll m = pre[i];
		ans += (m)*(m-1)/2;
	}
	cout<<ans<<endl;
	}
	return 0;
}
