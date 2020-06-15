#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    unordered_map <int, int> um;
	    while(n--){
	        int num;
	        cin>>num;
	        um[num]++;
	    }
	    int ans = 0;
	    for(auto x : um){
            int a = x.second;
            if(a >= 2){
                if(a %2 == 0){
                    ans += a;
                }
                else{
                    ans += (a - 1);
                }
            }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
