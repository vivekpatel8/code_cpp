#include<bits/stdc++.h>
using namespace std;



class temp{
public:
    int x, y, wt;
    temp(){
    }
    temp(int x, int y, int wt){
    this->x = x;
    this->y = y;
    this->wt = wt;
    }
};
bool comp(temp t1, temp t2){
return t1.wt < t2.wt;
}
int main(){
int n, m;
cin>>n>>m;
vector <int> distance;
distance.resize(n + 1);
for(int i = 1;i<=n;i++){
    distance[i] = INT_MAX;
}
vector<temp> gr;
gr.resize(m);
for(int i = 0;i<m;i++){
    int x, y, wt;
    cin>>x>>y>>wt;
    temp t(x, y, wt);
    gr[i] = t;
}
sort(gr.begin(), gr.end(), comp);
distance[1] = 0;
for(int i = 1;i<n;i++){
    for(auto node : gr){
        int x = node.x, y = node.y, wt = node.wt;
        if(distance[x] != INT_MAX && distance[y] > distance[x] + wt){
            distance[y] = distance[x] + wt;
        }
    }
}
for(auto node : gr){
    int x = node.x, y = node.y, wt = node.wt;
    if(distance[x] != INT_MAX && distance[y] > distance[x] + wt){
            cout<<"Graph contains a negative cycle";
            exit(0);
    }

}
for(auto node : distance){
    cout<<node<<" ";
}
}
