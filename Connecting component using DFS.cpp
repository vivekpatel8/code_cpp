#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
unordered_map <T,list<T>> edge;
unordered_map <T,bool> visited;

public:
    void addEdge(T x, T y){
    edge[x].push_back(y);
    edge[y].push_back(x);
    }

    void helperDFS(T src){
    if(!visited[src]){
    cout<<src<<"->";
    visited[src] = true;
    for(auto x : edge[src]){
        helperDFS(x);
    }
    }}

    void DFS(){
    int x = 0;
    for(auto conn : edge){
        if(!visited[conn.first]){
            cout<<x<<" : ";
            x++;
            helperDFS(conn.first);
            cout<<endl;
        }
    }
    }
};

int main(){
graph<int> g;
g.addEdge(0, 1);
g.addEdge(1, 2);
g.addEdge(2, 3);
g.addEdge(5, 4);
g.addEdge(5, 6);
g.addEdge(8, 8);
g.DFS();
}
