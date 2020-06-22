#include<bits/stdc++.h>
using namespace std;
unordered_map<int, list<int>> gr;

//unordered_map<int, int> par; // for counting the nos of parent a node has

unordered_map<int, int> child; // for counting the nos of children a node has

unordered_map<int, int> vis;

unordered_map<int, int> parent;

int main(){
int n, m;
cin>>n>>m;
int src = INT_MAX;
while(m--){
    int x, y;
    cin>>x>>y;
    src = min(src, min(x, y));
    gr[x].push_back(y);
}

queue <int> q;

q.push(src);
while(!q.empty()){
    int node = q.front();
    q.pop();
    if(!vis.count(node)){
        vis[node] = 1;
    for(int nbr : gr[node]){
        //par[nbr]++;
        parent[nbr] = node;
        child[node]++;
        q.push(nbr);
    }
    }
}
int ans = 0;
for(auto parent_pair : parent){
    int child_ = parent_pair.first;
    int parent_ = parent_pair.second;
    //cout<<parent_<<" -> "<<child_<<endl;
    if(child[child_] > child[parent_]){
        ans++;
    }
}
cout<<ans;
}
