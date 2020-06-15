#include<iostream>
using namespace std;
int main () {

	int a, b;
	cin>>a>>b;
	int l = min(a, b), r = max(a, b), ans = 0;
	for(int i = l; i <= r ; i++){
		for(int j = l; j <= r ; j++){
			int x = i^j;
			ans = max(x,ans);
		}
	}
	cout<<ans;
	return 0;
}

