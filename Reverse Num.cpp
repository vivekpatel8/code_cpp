#include<iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	int sum = 0;
	while(n != 0){
        int mod = n%10;
        sum = (sum*10) + mod;
        n = n / 10;
	}

	cout<<sum;
	return 0;
}
