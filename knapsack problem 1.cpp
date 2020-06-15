#include<bits/stdc++.h>
using namespace std;

int dp[1010][1010] = {0};

int kn(int c, int n, int * W, int * V){
if(c == 0 || n == 0)return 0;

if(dp[c][n] != 0)return dp[c][n];

if(W[n-1] > c){
    return kn(c, n-1, W, V);
}
else{
    return dp[c][n] = max(V[n-1] + kn(c-W[n-1], n -1, W, V), kn(c, n -1, W, V));
}

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
