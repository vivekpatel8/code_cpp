#include<bits/stdc++.h>
using namespace std;
#define ll long long

class node{
public:
    ll x, y, wt;
    node(ll x, ll y, ll wt){
    this->x = x;
    this->y = y;
    this->wt = wt;
    }
};

bool comp(node n1, node n2){
return n1.wt < n2.wt;
}

class dsu{
ll * par;

public:
   void init(ll n){
    par = new ll[n];
    for(ll i = 0;i<n;i++){
        par[i] = i;
    }
    }
    ll get_super_parent(ll x){
    if(x == par[x]){
        return x;
    }
    else{
        return par[x] = get_super_parent(par[x]);
    }
    }

    void union_(ll x, ll y){
    ll super_x = get_super_parent(x);
    ll super_y = get_super_parent(y);
    if(super_x != super_y){
        par[super_x] = super_y;
    }
    }
};


int main(){

    ll n, m;
    cin>>n>>m;
    vector <node> v1;
    for(ll i = 0;i<m;i++){
        ll x, y, z;
        cin>>x>>y>>z;
        node temp(x, y, z);
        v1.push_back(temp);
    }

    sort(v1.begin(), v1.end(), comp);
    dsu g;
    g.init(n);
    ll ans = 0;
    for(ll i = 0 ;i<n;i++){
        ll x = v1[i].x;
        ll y = v1[i].y;
        ll wt = v1[i].wt;

        if(g.get_super_parent(x) != g.get_super_parent(y)){
            g.union_(y, x);
            ans += wt;
        }
    }
    cout<<ans;
    return 0;
}
