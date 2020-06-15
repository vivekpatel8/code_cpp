#include<bits/stdc++.h>
using namespace std;

int dp[1010][1010] = {0};

int kn(int c, int n, int * W, int * V){
if(c == 0 || n == 0)return 0;

for(int i = 1;i<=n;i++){
    for(int j = 1 ;j<=c;j++){
        if(W[i] > c){
            dp[i][j] = dp[i-1][j];
        }
        else{
            dp[i][j] = max(V[i] + dp[i - 1][ j - W[i-1]] , dp[i-1][j]);
        }
    }
}
return dp[n][c];
}

int main(){

    int n, w;
    cin>>n>>w;
    int W[n], V[n];
    for(int i = 0;i<n;i++){
        cin>>W[i];// weight
    }
    for(int i = 0;i<n;i++){
        cin>>V[i];// value
    }
    cout<<kn(w, n, W, V);

}

