#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    map <char, int> visited;
    int len = s.length();
    int ans = 0;
    deque <char> v1;
    int cs = 1, ms = INT_MAX;
    for(int i = 0;i<256;i++){
        visited[i] = 0;
    }
    visited[s[0]] = 1;
    v1.push_back(s[0]);
    for(int i = 1;i<len;i++){

    }
    if(visited['1'] == 0 || visited['2'] == 0 || visited['3'] == 0){
            ans = 0;
    }

    cout<<ans<<endl;
}
}
