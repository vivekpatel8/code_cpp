#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
int n, m;
cin>>n>>m;
bool * vis = new bool[n]{false};
unordered_map<int ,list<pair<int, int>>> gr;

for(int i = 0;i<m;i++){
    int x, y, wt;
    cin>>x>>y>>wt;
    gr[x].push_back({y, wt});
    gr[y].push_back({x, wt});
}

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
pq.push({0, 0});
ll ans = 0;
while(!pq.empty()){
    auto n_pair = pq.top();
    pq.pop();
    int wt = n_pair.first;
    int node = n_pair.second;

    if(vis[node])continue;
    vis[node] = true;
    ans+= wt;

    for(auto nbr_pair : gr[node]){
        int nbr = nbr_pair.first;
        int nbr_wt = nbr_pair.second;

        if(!vis[nbr]){
            pq.push({nbr_wt, nbr});
        }
    }
}
cout<<ans;
}
/*
Given an undirected weighted graph with V nodes and E edges , find the weight of the minimum spanning tree. The IDs of the nodes are between 0 and n-1 inclusive.


Note : Try using both Kruskal and Prim's Algorithm for this problem

Input Format
First line contains two integers V and E.
Next E lines contain three space separated integers - u ,v and w
u and v are the nodes , w = weight of edge

Constraints
1 <= V <= 10000
1 <= E <= 100000
0 <= Weight of each edge <= 10000

Output Format
Display a single integer denoting the total weight of the minimum spanning tree.

Sample Input
4 5
0 1 10
1 2 15
0 2 5
3 1 2
3 2 40
Sample Output
17
Explanation
The edge between 2 & 3 with weight=15 and the edge between 3 & 4 with weight = 40 will not be a part of the final MST. The total weight of the remaining edges is 17.
*/
