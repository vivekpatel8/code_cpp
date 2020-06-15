#include<bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> p1, pair <int, int> p2){
return p1.first > p2.first;
}

int main(){
int t;
t = 1;
while(t--){
int n;
cin>>n;
int d, f, D, F, ans = 0, flag = 0;
vector <pair<int , int>> v;
v.reserve(n);
for(int i = 0;i<n;i++){
    cin>>d>>f;
    v.push_back(make_pair(d, f));
}
cin>>D>>F;
sort(v.begin(), v.end(), comp);
for(int i = 0;i<n;i++){
    v[i].first = D - v[i].first;
}
int x = 0, prev = 0;
priority_queue <int> pq;
while(x < n){
    if(F >= v[x].first - prev){
        pq.push(v[x].second);
        F = F - (v[x].first - prev);
        prev = v[x].first;
    }
    else{
        if(pq.empty()){
            flag = 1;
            break;
        }
        F += pq.top();
        pq.pop();
        ans++;
        continue;
    }
    x++;
}
if(flag == 1){
    cout<<-1;
    continue;
}
D = D - v[n-1].first;
while(F < D){
    if(pq.empty()){
        flag = 1;
        break;
    }
    F += pq.top();
    pq.pop();
    ans++;
}
if(flag == 1){
    cout<<-1;
}
else{
    cout<<ans;
}

}
}
