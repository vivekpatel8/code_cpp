#include<bits/stdc++.h>
using namespace std;

int grid[32][32];
int ans = 0;
void f(int n, int m,int i, int j, deque<pair<int, int>> dq){
if(i == n && j == m){
    for(int )
    return;
}

f(n, m, i+1, j, dq);

}


int main(){
int t;
cin>>t;
while(t--){
    int n, m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>grid[i][j];
        }
    }

}
}
