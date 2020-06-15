#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxx(int arr[],int n){
    int in[n];
    in[0] = 1;
    int i;
    for( i = 1;i<n;i++){
        in[i] = (arr[i]>=arr[i-1]) ? in[i-1] + 1 : 1;
    }

    int dec[n];
    dec[n-1] = 1;
    for(i = n-2;i>=0;i--)
    dec[i] = (arr[i]>=arr[i+1]) ? dec[i+1] + 1 : 1;

    int ans = in[0] + dec[0] - 1;
    for(i = 0;i<n;i++){
    if(ans<(in[i]+dec[i]- 1) )
    ans = in[i] + dec[i] - 1;
    }
    return ans;
}
int main() {
	int T;
	cin>>T;
	while(T--){
	    int n ;
	    cin>>n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	 int ans = maxx(arr,n);
	 cout<<ans;
	    cout<<endl;
	}

	return 0;
}
