#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
    map<T, list<T>> m;
    queue<T> q;
    unordered_map<T, bool> um;
    map<T, int> dist;
    public:
    void addNode(T x, T y, bool dir){
        m[x].push_back(y);
        if(dir){
            m[y].push_back(x);
        }
    }
    void BFS(T src){
    q.push(src);
    um[src] = true;
    while(!q.empty()){
        T f = q.front();
        for(auto  nbr : m[f]){
            if(!um[nbr]){
                q.push(nbr);
                um[nbr] = true;
            }
        }
        cout<<f<<" ";
        q.pop();
        f = q.front();
    }
    }
    void singleSrcShortestPath(T src){
    for(auto n : m){
        dist[n.first] = INT_MAX;
    }
    dist[src] = 0;
    q.push(src);
    while(!q.empty()){
        T parent = q.front();
        q.pop();
        for(auto  nbr : m[parent]){
            if(dist[nbr] == INT_MAX){
                dist[nbr] = dist[parent] + 1;
                q.push(nbr);
            }
        }
    }
    for(auto x : dist){
        cout<<src<<"->"<<x.first<<"->"<<x.second<<endl;
    }

    }

};

int main(){



graph<int> g;
g.addNode(0, 1, false);


return 0;
}
