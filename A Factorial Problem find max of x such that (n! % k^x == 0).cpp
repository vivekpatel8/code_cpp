#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n, k;
    cin>>n>>k;
    int ans = INT_MAX;
    int cnt = 0;
    for(int i = 2;i*i <= k ;i++){

        if(k % i == 0){ // find the contribution of prime no. i in k
            cnt = 0;
            while(k % i == 0){
                cnt++; // find the contribution of prime no. i in k
                k = k / i;
            }
        int occ = 0;
        long long p = i;
        while(i<=n){ // find the  occurrence of prime no. i in n and storing it temp. in occ
            occ+= n/p;
            p = p * i;
        }
        ans = min(ans, occ / cnt);
        }
    }
    if(k > 1){
        int p = k;
        int cnt = 0;
        while(p <= n){
        cnt+= n/p;
        p *= k;
        }
        ans = min(ans, cnt);
    }
    if(ans == INT_MAX){
        ans = 0;
    }
    cout<<ans<<endl;
}

}
