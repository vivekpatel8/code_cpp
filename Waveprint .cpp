#include<iostream>
using namespace std;
int main() {
	int n , m;
	cin>>n>>m;
	int arr[10][10];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin>>arr[j][i];
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(i%2 == 0){
				cout<<arr[i][j]<<", ";
			}
			else{
				cout<<arr[i][n-j-1]<<", ";
			}
		}
	}
	cout<<"END";

	return 0;
}
