#include<bits/stdc++.h>
using namespace std;

struct comp{
bool operator()(pair <int, int> p1, pair<int, int> p2){
return p1.second < p2.second;
}
};

int main(){
int n;
cin>>n;
vector <pair<int, int> > v;
v.reserve(n);
for(int i = 0;i<n;i++){
    int c, r;
    cin>>c>>r;
    v.push_back(make_pair(c-r, c+r));
}

sort(v.begin(), v.end(), comp());
int ans = 0;
int e = v[0].second;
for(int i = 1;i<n;i++){
    if(v[i].first < e){
        ans++;
    }
    else{
        e = v[i].second;
    }
}
cout<<ans;
}
