#include<bits/stdc++.h>
using namespace std;
#define ll long long


class graph {

    list <pair<ll, ll>> * l;
    ll v;

    public:
    void init(ll V){
    v = V;
    l = new list<pair<ll, ll>>[(v+1)];
    }

    void addGraph(ll x , ll y, ll wt){
    l[x].push_back({y, wt});
    l[y].push_back({x, wt});
    }

    ll helper(ll node, ll * cnt, bool * vis, ll & ans){
    vis[node] = true;
    cnt[node] = 1;
    for(auto nbr_pair : l[node]){
        ll nbr = nbr_pair.first;
        ll wt = nbr_pair.second;
        if(!vis[nbr]){
            cnt[node] += helper(nbr, cnt, vis, ans);
            ll x = cnt[nbr];
            ll y = v - x;
            ans += (2 * min(x, y) * wt);
        }
    }
    return cnt[node];
    }

    ll dfs(){
    ll n;
    cin>>n;
    init(n);
    for(ll i = 1;i<n;i++){
    ll x, y, z;
    cin>>x>>y>>z;
    addGraph(x, y, z);
    }
    bool * visited = new bool[(n + 1)];
    ll * cnt = new ll[(n + 1)];
    for(ll i = 0;i<=n;i++){
        visited[i] = false;
        cnt[i] = 0;
    }
    ll ans = 0;
    helper(1, cnt, visited, ans);
    return ans;

    }
};


int main(){
ll t;
cin>>t;
for(ll i = 1;i<=t;i++){
graph g;
cout<<"Case #"<<i<<": "<<g.dfs()<<endl;
}
}
