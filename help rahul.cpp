#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		int key;
		cin>>key;
		int l = 0, r = n-1;

		while(l<=r){
                int mid = (l+r)/2;
			if(arr[mid] == key){
				cout<<mid<<endl;
				break;
			}
			else if(arr[l]<=arr[mid]){
				if(key>= arr[l] && key<=arr[mid]){
					r = mid -1;
				}
				else {
					l = mid +1;
				}
			}
			else{
				if(key >= arr[mid] && key <= arr[r]){
					l = mid +1;
				}
				else{
					r =  mid -1;
				}
			}
		}

	}
	return 0;
}
