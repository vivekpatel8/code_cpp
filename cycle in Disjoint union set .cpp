#include<bits/stdc++.h>
using namespace std;

class dsu{
public:
vector <int> par;


void init(int n){
    par.resize(n);
    for(int i = 0;i<n;i++){
        par[i] = i;
    }

}
int getSuperParent(int x){
if(par[x] == x){ // 1 == 0
    return x; //
}
else{ //                            [0]
   return par[x] =  getSuperParent(par[x]);
}
}
void union_(int x, int y){
int super_parent_of_x = getSuperParent(x);
int super_parent_of_y = getSuperParent(y);
if(super_parent_of_x != super_parent_of_y){
    par[super_parent_of_x] = super_parent_of_y;
}
}
};

void solve(){
int n, m;
cin>>n>>m;
dsu g;
g.init(n);
bool yes = false;
for(int i = 0;i<m;i++){
    int x, y;
    cin>>x>>y;
    yes = false;
    if(g.getSuperParent(x) != g.getSuperParent(y)){
    g.union_(x, y);
    }
    else{
    yes = true;
    break;
    }
}
for(auto x : g.par){
    cout<<x<<" ";
}
cout<<boolalpha<<yes;
}

int main(){
solve();
}

