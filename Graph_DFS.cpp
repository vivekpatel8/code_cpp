#include<bits/stdc++.h>
using namespace std;

template <typename T>

class graph{
unordered_map<T, list<T>> l;
unordered_map<T, bool> visited;
public:
    void addEdge(T x, T y){
    l[x].push_back(y);
    l[y].push_back(x);
    }

    void helperDFS(T src){
        visited[src] = true;
        cout<<src<<"->";
    for(auto nbr : l[src]){
        if(visited[nbr] == false){
            helperDFS(nbr);
        }
    }
    }

    void DFS(T src){
    for(auto x : l){
        visited[x.first] = false;
    }
    helperDFS(src);
    }
};


int main(){
graph<int>g;
g.addEdge(0, 1);
g.addEdge(1, 2);
g.addEdge(0, 3);
g.addEdge(3, 4);
g.addEdge(4, 5);
g.DFS(0);
}
