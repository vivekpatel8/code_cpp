#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
int t;
cin>>t;
while(t--){
    ll n, m; // n nodes // m edges
    cin>>n>>m;
    unordered_map<ll, list<pair<ll, ll>>> l;
    unordered_map<ll, ll> dis;

    for(ll i = 1;i<=n;i++)dis[i] = INT_MAX; // marking distances of all nodes from src 0

    for(ll i = 0;i<m;i++){ // taking input for unordered map
        ll x, y, wt;
        cin>>x>>y>>wt;
        l[x].push_back({y, wt});
        l[y].push_back({x, wt});
    }

    ll src;
    cin>>src;
    dis[src] = 0; // distance of src to src as 0
    set<pair<ll, ll>> s;
    s.insert({0, src});
    while(!s.empty()){
        auto node_pair = *(s.begin());
        ll node_dis = node_pair.first;
        ll node = node_pair.second;
        s.erase(s.begin());
        for(auto nbr : l[node]){
            ll nbr_node = nbr.first;
            ll nbr_dis = nbr.second;
            if(node_dis + nbr_dis < dis[nbr_node]){
            auto f = s.find({dis[nbr_node], nbr_node});

            if(f != s.end())
            s.erase(f);

            s.insert({(node_dis + nbr_dis), nbr_node});
            dis[nbr_node] = node_dis + nbr_dis;
        }}
    }
    for(ll i = 1;i<=n;i++){
        if(i != src){
            if(dis[i] == INT_MAX){
                cout<<-1<<" "; // node which is not reach able as zero
            }
            else{
                cout<<dis[i]<<" "; // getting all the distance from src node
            }
        }
    }
    cout<<endl;
}
}
