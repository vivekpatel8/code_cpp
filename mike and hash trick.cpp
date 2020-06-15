#include<bits/stdc++.h>
using namespace std;


struct comp{

bool operator()(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}
};


int main(){
int n;
cin>>n;
unordered_map <int, int> um;
int cnt = 0;
for(int i = 0;i<n;i++){
    int num;
    cin>>num;// 1 2 1 3
    um[num] = cnt;
    cnt++;
}
vector <pair<int, int>> ans;

for(auto x : um){
    ans.push_back(x);
}
sort(ans.begin(), ans.end(), comp());
for(auto x : ans){
    cout<<x.first<<endl;
}
}
