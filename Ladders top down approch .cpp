#include<bits/stdc++.h>
using namespace std;

int laddersTopDownApproch(int n, int k, int *dp){
if(n == 0)return 1;

if(dp[n]  != 0)return dp[n];

int ways = 0;

for(int i = 1;i<=k;i++){
    if(n-i >= 0){
        ways += laddersTopDownApproch(n-i, k, dp);
    }
}

return dp[n] = ways;

}

int main(){
int n, k;
cin>>n>>k;
int dp[1000] = {0};
cout<<laddersTopDownApproch(n, k, dp)<<endl;
}
