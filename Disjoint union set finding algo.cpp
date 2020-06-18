#include<bits/stdc++.h>
using namespace std;

class dsu{
public:
vector <int> par;
vector <int> sz;
int total_comp ;
void init(int n){
    par.resize(n);
    sz.resize(n);
    for(int i = 0;i<n;i++){
        par[i] = i;
        sz[i] = 1;
    }
    total_comp = n;
}
int getSuperParent(int x){
if(par[x] == x){
    return x;
}
else{
   return par[x] =  getSuperParent(par[x]);
}
}
void union_(int x, int y){
int super_parent_of_x = getSuperParent(x);
int super_parent_of_y = getSuperParent(y);
if(super_parent_of_x != super_parent_of_y){
    par[super_parent_of_x] = super_parent_of_y;
    sz[super_parent_of_y] += sz[super_parent_of_x];
    sz[super_parent_of_x] = 0;
    total_comp--;
}
}
};

void solve(){
int n, m;
cin>>n>>m;
dsu g;
g.init(n);
for(int i = 0;i<m;i++){
    int x, y;
    cin>>x>>y;
    g.union_(x, y);

}
int ans = 0;
for(int i = 0;i<n;i++){
    int super_parent_i = g.getSuperParent(i);
    ans += (n - g.sz[super_parent_i]);
}
cout<<ans / 2;
}

int main(){
solve();

}
