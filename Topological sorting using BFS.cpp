#include<bits/stdc++.h>
using namespace std;

class graph{
list  <int> *l;

public :
    graph(int v){
    l = new list<int>[v];
    }
    void addEdge(int x, int y){
    l[x].push_back(y);
    }
    void BFS(int v){
    int inorder[v] = {0};
    for(int i = 0;i<v;i++){
        for(auto y : l[i]){
            inorder[y]++;
        }
    }
    queue <int> q;
    queue <int> ans;
    for(int i = 0;i<v;i++){
        if(inorder[i] == 0)
        q.push(inorder[i]);
    }
    while(!q.empty()){
        int f = q.front();
        ans.push(f);
        q.pop();
        for(auto nbr : l[f]){
            inorder[nbr]--;
            if(inorder[nbr] == 0)q.push(nbr);
        }

    }
    while(!ans.empty()){
        cout<<ans.front()<<"->";
        ans.pop();
    }
    }
};

int main(){
graph g(5);
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(2, 3);
g.addEdge(1, 3);
g.addEdge(3, 4);
g.BFS(5);
}
