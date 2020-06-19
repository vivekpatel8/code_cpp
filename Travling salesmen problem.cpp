#include<bits/stdc++.h>
using namespace std;

int n = 4;
int visited_all = (1 << n) - 1;
int dp[4][16];
int graph[4][4] = {{0, 20, 42, 25},
                   {20, 0, 30, 34},
                   {42, 30, 0, 10},
                   {25, 34, 10, 0}};
int tsp(int mask, int pos){
if(visited_all == mask){
    return graph[pos][0];
}
if(dp[pos][mask] != -1)return dp[pos][mask];
int ans = INT_MAX;
for(int city = 0;city<n;city++){
    if((mask & (1<<city)) == 0){
        int smallAns = graph[pos][city] + tsp((mask | (1<<city)) , city  );
        ans = min(ans, smallAns);
    }
}
return dp[pos][mask] = ans;
}



int main(){
memset(dp, -1, sizeof(dp));
cout<<tsp(1, 0);
}
