#include<bits/stdc++.h>
using namespace std;

unordered_map <int, list<int>> gr, grr;
int vis[100], col[100];
vector <int> order;
void dfs(int src){
vis[src] = 1;
for(int nbr : gr[src]){
    if(!vis[nbr]){
        dfs(nbr);
    }
}
order.push_back(src);
}
void dfs_rev(int src, int color){
vis[src] = 1;
col[src] = color;
for(auto nbr : grr[src]){
    if(!vis[nbr]){
        dfs_rev(nbr, color);
    }
}
}
int main(){

int n, m;
cin>>n>>m;

memset(vis, 0, sizeof(vis));
for(int i  =0;i<m;i++){
    int x , y;
    cin>>x>>y;
    gr[x].push_back(y);
    grr[y].push_back(x);
}

for(int i = 1;i<=n;i++){
    if(!vis[i]){
        dfs(i);
    }
}
memset(vis, 0, sizeof(vis));
int co = 1;
for(int x : order){
    if(!vis[x]){
        dfs_rev(x, co);
        co++;
    }
}
for(int i = 1;i<=n;i++)cout<<i<<" "<<col[i]<<endl;
}


