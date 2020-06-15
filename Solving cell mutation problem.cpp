#include<bits/stdc++.h>
using namespace std;

int dp[100]  = {0};

int f(int n, int x, int y, int z){
if(n == 0 || n == 1)return 0;
if(dp[n] != 0)return dp[n];
int a, b, c;
a = b = c = INT_MAX;
if(n % 2 == 0){
    a = x + f(n / 2, x, y, z);
    b = y + f(n - 1, x, y, z);
}
else{
    b = y + f(n -1 , x, y, z);
    c = x + z + f((n + 1) / 2, x, y, z);
}
dp[n] = min(a, min(b, c));
return dp[n];
}

int solveCellProblem(int n, int x, int y, int z){

int dp[1000];
dp[0] = dp[1] = 0;

for(int i = 2;i<=n;i++){
    if(i % 2 == 0){
        dp[i] = min(dp[i / 2] + x, dp[i - 1] + y);
    }
    else{
        dp[i] = min(dp[i-1] + y, dp[(i+1) / 2] + x + y);
    }
}
return dp[n];
}

int main(){
int n, x, y, z;
cin>>n>>x>>y>>z;

cout<<f(n, x, y, z);

}
