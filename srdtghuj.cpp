#include<iostream>
using namespace std;
#define ll long long
#define size 1000000
int main() {
	int t;
	cin>>t;
	long long sum = 0;
	for(int i = 1;i<=;i++){
		if(i&1){
			sum -= i;
		}
		else{
			sum += i;
		}
	}
	while(t--){
	long long n;
	cin>>n;

	cout<<sum<<endl;
	}
	return 0;
}
