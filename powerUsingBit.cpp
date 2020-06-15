/*#include<iostream>
using namespace std;

int main(){
int a, b;
cin>>a>>b;
int ans = 1;
while(b>0){
    int mask = (b&1);
    if(mask>0){
        ans *= a;
    }
    b = b>>1;
    a *= a;
}
cout<<ans;
}
*/
#include<iostream>
using namespace std;
#define ll long long int
int main () {
	ll n;
	cin>>n;
	ll arr[1000000];
	for(ll i = 0;i<n;i++){
		cin>>arr[i];
	}
	ll c = 0;
	for(ll k = 0;k<n;k++){
		for(ll j = 0;j<n;j++){
                ll a  = arr[k];
                ll b  = arr[j];
                ll mask = (a & b);
			if(mask == 0){
				c++;
			}
		}
	}
	cout<<c;
	return 0;
}
