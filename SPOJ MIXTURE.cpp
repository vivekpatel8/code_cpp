#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[100][100];
int arr[100];

ll sum(int s, int e){

ll ans = 0;
for(int i =s ;i<=e;i++){
    ans+= arr[i];
    ans%= 100;
}
return ans;
}

ll solveMixture(int s, int e){
if(s>=e){
    return 0;
}

if(dp[s][e] != -1)return dp[s][e];
dp[s][e] = INT_MAX;
for(int k = s;k<=e;k++){
    dp[s][e] = min(dp[s][e] ,solveMixture(s, k) + solveMixture(k+1, e) + sum(s, k) * sum(k+1, e));
}
return dp[s][e];
}

int main(){
    int n;

while((scanf("%d", &n)) != EOF){

    for(int i = 0;i<n;i++)cin>>arr[i];
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=n;j++){
            dp[i][j] = -1;
        }
    }
    cout<<solveMixture(0, n-1)<<endl;
}


}
