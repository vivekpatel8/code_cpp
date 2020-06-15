#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int p;
	cin>>p;
	int l = 0,r = n;
	int mid;
	float ans;
	while(l<=r){
		mid = (l+r)/2;
		if(mid*mid == n){
			ans = mid;
			break;
		}
		else if(mid*mid < n){
			l = mid+1;
			ans = mid;
		}
		else{
			r = mid-1;
		}
	}
	float inc = 0.1;
	while(p--){
        while(ans * ans <= n){
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc/10;
	}
	cout<<ans;
	return 0;
}
