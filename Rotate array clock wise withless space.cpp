#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int T;
	cin>>T;
	int n ;
	cin>>n;
	int arr[n][n];
	for(int i = 0;i<n;i++){
	    for(int j = 0;j<n;j++){
	        cin>>arr[i][j];
	    }
	}
	for(int i = 0;i<n;i++){
	    reverse(arr[i],arr[i]+n);
	}
		for(int i = n-1;i>=0;i--){
	    for(int j = n-1;j>=0;j--){
	        cout<<arr[j][i];
	    }
	}
	return 0;
}
