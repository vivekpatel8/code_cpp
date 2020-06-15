#include<bits/stdc++.h>
using namespace std;

class Graph{
    unordered_map<string, list<pair<string, int>>> um;
public:
   void addNode(string x, string y, bool directed, int wt){
    um[x].push_back(make_pair(y, wt));
    if(directed){
        um[y].push_back(make_pair(x, wt));
    }
    }
    void print(){
    for(auto x : um){
        string city = x.first;
        auto l = x.second;
        for(auto y : l){
            cout<<city<<" "<<y.second<<" "<<y.first<<endl;
        }
    }
    }
};

int main(){
Graph g;
g.addNode("a", "b", true, 5);
g.addNode("c","b", true, 5);
g.print();
}
