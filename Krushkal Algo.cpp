#include<bits/stdc++.h>
using namespace std;

// it is used to find minimum spanning tree
// the vertex is taken if it is not forming cycle
class node{
public:
    int x;
    int y;
    int wt;
};
struct comp{
bool operator ()(node n1, node n2){
    return n1.wt < n2.wt;
}
};
class dsu{
public:
vector <int> parent;
int v;
void init(int v){
this->v = v;
parent.resize(v);
for(int i = 0;i<v;i++)parent[i] = i;
}
int get_super_parent(int x){
if(x == parent[x]){
    return x;
}
else{
    return parent[x] = get_super_parent(parent[x]);
}
}
void union_(int x, int y){
int par_of_x = get_super_parent(x);
int par_of_y = get_super_parent(y);
if(par_of_x != par_of_y){
    parent[x] = par_of_y;
}
}

};


int main(){
vector <node> vec;
int v, k;
cin>>v>>k;
dsu g;
g.init(v);
int ans = 0;
vec.resize(k);

for(int i = 0;i<k;i++){
    int x, y, wt;
    cin>>x>>y>>wt;
    node temp;
    temp.x = x;
    temp.y = y;
    temp.wt = wt;
    vec[i] = temp;
}
sort(vec.begin(), vec.end(), comp()); // it is sorted according to the wt of edges
for(int i = 0;i<k;i++){
    int wt = vec[i].wt;
    int x = vec[i].x;
    int y = vec[i].y;
    if(g.get_super_parent(x) != g.get_super_parent(y)){ // if not forming cycle then it is taken
        g.union_(x, y);
        ans += wt; // wt is included
    }
}
cout<<ans<<endl;
}
