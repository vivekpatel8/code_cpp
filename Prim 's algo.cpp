#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
int n, m;
cin>>n>>m;
unordered_map<int, list<pair<int,int>>> um;
for(int i = 0;i<m;i++){
    int x, y , wt;
    cin>>x>>y>>wt;
    um[x].push_back({y, wt});
    um[y].push_back({x, wt});
}
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
pq.push({0, 1});
bool visited[n+1] = {false};
ll ans = 0;
while(!pq.empty()){
    pair<int, int> best = pq.top();
    pq.pop();
    int wt = best.first;
    int node = best.second;
    if(visited[node])continue;
    visited[node] = true;
    ans+= wt;
    for(auto x : um[node]){
        if(!visited[x.first]){
            pq.push({x.second, x.first});
        }
    }
}
cout<<ans;
return 0;
}


