#include<bits/stdc++.h>
using namespace std;

struct cmp{
bool operator()(pair <int, int> p1, pair<int, int> p2){
return p1.second < p2.second;
}
};

int main(){
int t;
cin>>t;
while(t--){
    vector <pair<int, int>> v;
    int n;
    cin>>n;
    int s, e;
    while(n--){
        cin>>s>>e;
        v.push_back({s, e});
    }
    sort(v.begin(), v.end(), cmp());
    int fin = v[0].second;
    int ans = 1;
    for(int i = 1;i<v.size();i++){
        if(v[i].first > fin){
            ans++;
            fin = v[i].second;
        }
    }
    cout<<ans<<endl;
}

}
