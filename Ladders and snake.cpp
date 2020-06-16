#include<bits/stdc++.h>
using namespace std;

template <typename T>
class graph{
    unordered_map<T, list<T>> edge;

public:
    void addEdge(T x, T y){
    edge[x].push_back(y);
    }

    void snakeNLadder(T src, T dest){
    queue <T> q;
    unordered_map <T, T> dist;
    unordered_map <T, T> path; // nest path
    for(auto x : edge){
        dist[x.first] = INT_MAX;
    }
    dist[src] = src; // 0
    q.push(src);
    while(!q.empty()){
        auto parent = q.front();
        q.pop();
        for(auto nbr : edge[parent]){
            if(dist[nbr] == INT_MAX){
                q.push(nbr);
                dist[nbr] = dist[parent] + 1;
                path[nbr] = parent;
            }
        }
    }

    T temp = 36;
    stack <T> p;
    while(temp != src){
        p.push(temp);
        temp = path[temp];
    }
    p.push(src);
    while(!p.empty()){
        cout<<p.top()<<"->";
        p.pop();
    }
    cout<<endl;
    cout<<dist[dest];
    }
};

int main(){
    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = 10;
    board[32] = -2;
    board[34] = -22;
    graph<int> g;

    for(int i = 0;i<=36;i++){
        for(int dice = 1;dice<=6;dice++){
            int j = i + dice;
            j += board[j];
            if(j <= 36)
            g.addEdge(i, j);
        }
    }
    g.addEdge(36, 36);
    g.snakeNLadder(0, 36);
}
