#include<iostream>
using namespace std;
int main() {

	int n;
	cin>>n;
	int arr[n];
	for(int x = 0;x <n;x++){
	cin>>arr[x];
	}
	int max1 = 0;
    for(int x = 0;x <n;x++){
	if(arr[x]>max1){
        max1 = arr[x];
	}
	}
	int big[max1][n] ={0};
	for(int i = 0;i<max1;i++){
          for(int j = 0;j<n;j++){
           for(int k = arr[j];k>0;k--){
            big[j][i] = 1;
        }
      }
	}
for(int i = 0;i<max1;i++){
          for(int j = 0;j<n;j++){
           cout<<big[i][j]<<" ";
      }
      cout<<endl;
	}
	return 0;
	}
