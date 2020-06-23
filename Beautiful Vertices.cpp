#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p ;
ll ans = 0;
void dfs(ll src, vector <ll> * gr, bool * vis){
vis[src] = true;
for(auto nbr : gr[src]){
    if(!vis[nbr]){
    if(src == p){
    if(gr[nbr].size() > gr[src].size() - 1)ans++;
    }
    else{
    if(gr[nbr].size() > gr[src].size())ans++;
    }
    dfs(nbr, gr, vis);
    }
}
}

int main(){
ll n, m;
cin>>n>>m;

vector <ll> gr[(n+1)];

bool vis[(n+1)] = {false};

while(m--){
    ll x, y;
    cin>>x>>y;
    gr[x].push_back(y);
    gr[y].push_back(x);
}

for(ll i = 1;i<=n;i++){
    p = i;
    if(!vis[i]){
        dfs(i, gr, vis);
    }
}
cout<<ans;
}
