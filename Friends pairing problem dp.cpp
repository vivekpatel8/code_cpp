#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll arr[102];
void fp(ll n){
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    ll a = 1, b = 2, c = 0;
    for(ll i = 3;i<=n;i++){
        c = b + ((i - 1) * a);
        a = b;
        b = c;
        arr[i] = c;
    }
}
int main() {
	int t;
	cin>>t;
	fp(100);
	while(t--){
	    ll n;
	    cin>>n;
	    cout<<arr[n]<<endl;
	}
	return 0;
}
