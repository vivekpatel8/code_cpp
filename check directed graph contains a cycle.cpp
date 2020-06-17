#include<bits/stdc++.h>
using namespace std;

class graph{
list <int> * l;
bool * visited ;
bool * stack1;
int v;
public:
    graph(int v){
    this->v = v;
    l = new list<int>[v];
    visited = new bool[v]{false};
    stack1 = new bool[v]{false};
    }
    void add(int x , int y){
    l[x].push_back(y);
    }
    bool isCyle(int src){
    visited[src] = true;
    stack1[src] = true;
    for(int nbr : l[src]){
        if(stack1[nbr] == true){
            return true;
        }
        else if(visited[nbr] == false){
            bool cycle_hai_kya = isCyle(nbr);
            if(cycle_hai_kya)return true;
        }
    }
    stack1[src] = false;
    return false;
    }

};


int main(){
graph g(4);
g.add(0, 1);
g.add(1, 2);
g.add(2, 3);
g.add(3, 4);
cout<<boolalpha<<g.isCyle(0);
}
