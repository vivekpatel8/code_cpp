#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll uglyNo(ll n){
	ll next_ugly_no = 1;
	ll arr[n];
	arr[0] = 1;
	ll i2 = 0, i3 = 0, i5 = 0;
	ll m2 = 2, m3 = 3, m5 = 5;
	for(ll i = 1;i<n;i++){
		next_ugly_no = min(m2, min(m3, m5));
		arr[i] = next_ugly_no;
		if(m2 == next_ugly_no){
			i2++;
			m2 = 2 * arr[i2];
		}
		if(m3 == next_ugly_no){
			i3++;
			m3 = 3 * arr[i3];
		}
		if(m5 == next_ugly_no){
			i5++;
			m5 = 5 * arr[i5];
		}
	}
	return next_ugly_no;
}

int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    cout<<uglyNo(n)<<endl;
}

}
