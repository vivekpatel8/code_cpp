#include<iostream>
using namespace std;

int main() {
    int r,c;
	cin>>r>>c;
	int arr[10][10] ;
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			cin>>arr[i][j];
		}
	}
		for(int i = 0;i<r;i++){
		if(i%2 == 0){
		for(int j = 0;j<c;j++){

			cout<<arr[j][i]<<", ";
		}}
		else{
        		for(int j = c-1;j>=0;j--){

			cout<<arr[j][i]<<", ";
		}
		}
	}
	cout<<"END";

	return 0;
}
