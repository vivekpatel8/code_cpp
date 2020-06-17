#include<bits/stdc++.h>
using namespace std;
class graph{
list <int> * l;
int v;
bool * visited ;
public:
    graph(int v){
    this->v = v;
    l = new list<int>[v];
    visited = new bool[v]{false};
    }
    void add(int x, int y){
    l[x].push_back(y);
    l[y].push_back(x);
    }
    bool helper(int node , int parent){
    visited[node] = true;
    for(int nbr : l[node]){
        if(!visited[nbr]){
            bool cycleHai = helper(nbr, node);
            if(cycleHai)return true;
        }
        else if(nbr != parent){
            return true;
        }
    }
    return false;
    }
    bool hasCycle(int src){
    return helper(src, -1);
    }

};
int main(){
graph g(5);
g.add(0, 1);
g.add(1, 2);
g.add(2, 3);
g.add(3, 0);
cout<<boolalpha<<g.hasCycle(0);
}
