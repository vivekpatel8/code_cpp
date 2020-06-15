#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll>res;
	    ll ans[n];
	    ll a=0,b,c=0;
	    for(ll i=0;i<n;i++){
	        cin>>ans[i];
	    }res.push_back(ans[0]);
        for(ll i=1;i<n-1;i++){
            if(ans[i]>ans[i-1] && ans[i]<ans[i+1] )continue;
            if(ans[i]<ans[i-1] && ans[i]>ans[i+1] )continue;
            else res.push_back(ans[i]);
        }res.push_back(ans[n-1]);

	        cout<<res.size()<<endl;
	        for(ll i=0;i<res.size();i++){
	            cout<<res[i]<<" ";
	        }cout<<endl;
	}
	return 0;
}
