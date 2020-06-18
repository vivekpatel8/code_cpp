#include<bits/stdc++.h>
using namespace std;
template <typename t>

class graph{
unordered_map <t,list<pair<t, int>>> um;
public:
    void addAdj(t x, t y, int dist){
    um[x].push_back(make_pair(y, dist));
    um[y].push_back(make_pair(x, dist));
    }

    void travAdj(){
    for(auto p : um){
        cout<<p.first<<"->";
        for(auto x : p.first){
            cout<<x.second<<"->"<<x.first<<endl;
        }
    }
    }

    void DijSSS(t src){
    unordered_map <t, int> distance;
    for(auto p : um){
        distance[p.first] = INT_MAX;
    }
    distance[src] = 0;
    set <pair<int, t>> s;
    s.insert(make_pair(0, src));
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(s.begin());
        t node = x.second;
        int distNode = x.first;
        for(auto p : um[node]){
            if(distNode + p.second < distance[p.first]){
                auto some_node = s.find(make_pair(p.second, p.first));
                if(some_node != s.end()){
                    s.erase(some_node);
                }
                distance[p.first] = distNode + p.second;
                s.insert(make_pair(distNode + p.second, p.first));
            }
        }
    }
    for(auto x : distance){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    }

};

int main(){
graph<char> g;
g.addAdj('a', 'b', 1);
g.addAdj('a', 'c', 4);
g.addAdj('a', 'c', 7);
g.addAdj('b', 'c', 1);
g.addAdj('c', 'd', 2);
g.DijSSS('a');
}
