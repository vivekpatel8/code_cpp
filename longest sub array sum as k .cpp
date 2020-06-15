/*#include<bits/stdc++.h>
using namespace std;

int longestSubArraySumK(int * arr, int n, int k){
int len = 0;
int sum = 0;
unordered_map <int, int> um;
for(int i = 0;i<n;i++){
    sum += arr[i];
    if(sum == k)len = max(len ,i+1 );
    if(um.find(sum - k) != um.end()){
        len = max(len, i - um[sum - k]);
    }
    else{
        um[sum] = i;
    }
}
return len;
}

int main(){
int n, k;
cin>>n>>k;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
cout<<longestSubArraySumK(arr, n, k);
}
*/


#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, sum;
	    cin>>n>>sum;
	    unordered_map <int, int> um;
	    while(n--){
	        int num;
	        cin>>num;
	        um[num]++;
	    }
	    int ans = 0;
	    for(auto x : um){
	        ans += um[(sum - x.first)];
	        if((sum - x.first) == x.first)ans--;
	    }
	    cout<<(ans/2)<<endl;
	}
	return 0;
}
