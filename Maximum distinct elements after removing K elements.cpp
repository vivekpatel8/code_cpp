#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> custom; // freq and then value

int main(){
int t;
cin>>t;
while(t--){
    int n, k;
    cin>>n>>k;
    priority_queue <int> pq;
    unordered_map <int, int> um;
    int num;
    for(int i = 0;i<n;i++){
        cin>>num;
        um[num]++;
    }

    for(auto it = um.begin();it != um.end();it++){
        pq.push(it->second);
    }

    while(k--){
        int temp = pq.top();
        temp--;
        pq.pop();
        if(temp != 0){
            pq.push(temp);
        }
    }

    cout<<pq.size()<<endl;
}
}
