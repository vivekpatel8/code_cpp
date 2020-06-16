#include<bits/stdc++.h>
using namespace std;
template <typename t>
class graph{
map <t, list<t>> edge;
unordered_map <t, bool> visited;
list <t> l;
public:
    void addEdge(t x, t y){
    edge[x].push_back(y);
    }

    void helperDFS(t src){

    visited[src] = true;
    for(auto nbr : edge[src]){
        if(!visited[nbr]){
            helperDFS(nbr);

        }
    }
    l.push_front(src);
    return;
    }

    void DFS(t src){
       for(auto p : edge){
        if(!visited[p.first])
        helperDFS(0);
        }
        for(auto x : l)cout<<x<<"->";
    }
};

int main(){
graph<int> g;
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(2, 3);
g.addEdge(1, 3);
g.DFS(0);
}
