#include<bits/stdc++.h>
using namespace std;


bool comp(pair <int , int> p1, pair<int, int> p2){
return p1.first > p2.first;
}

int main(){
int t;
cin>>t;
while(t--){
    vector<pair<int, int>> v;
    priority_queue<int> pq;
    int n, ans = 0, d, f,D, F , flag = 0;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>d>>f;
        v.push_back(make_pair(d, f));
    }
    sort(v.begin(), v.end(), comp);
    cin>>D>>F; //total distance and Initial fuel
    for(int i = 0;i<n;i++){
        v[i].first = D - v[i].first;
    }
    int x = 0 , prev = 0;
    while(x<n){
        if(F >= (v[x].first - prev)){
            F = F - (v[x].first - prev);
            pq.push(v[x].second);
            prev = v[x].first;
        }
        else{
            if(pq.empty()){
                flag = 1;
            }
            F += pq.top();
            pq.pop();
            ans++;
            continue;
        }
        x++;
    }

    if(flag == 1){
        cout<<-1<<endl;
        continue;
    }
    D = D - v[n-1].first;
    if(F >= D){
        cout<<ans<<endl;
        continue;
    }

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
            cout<<-1<<endl; continue;
    }
    cout<<ans<<endl;
}
}
