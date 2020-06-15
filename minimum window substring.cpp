#include<bits/stdc++.h>
using namespace std;

int minWindowSubString(string s, string p){
int len = s.lenght();

unordered_map <char, int> patt;
unordered_map <char, int> WF;
queue <char> q;
for(int i = 0;i<n;i++){
    patt[s[i]]++;
}

for(int i = 0;i<n;i++){
    if(q.empty()){
        char c = s[i];
        if(patt[c] >= 1){
            q.push(c);
            WF[c]++;
        }
    }
    else{
        char c = s[i];
        char t = q.top();
        // expand
        if(patt.find(c) == patt.end()){
            // nothing to do as c is not part of pattern
            q.push(c);
        }
        else{
            if(c == t ){
                q.push(c);
                while()
            }
            else if(WF[c] < patt[c]){
                q.push(c);
                WF[c]++;
            }
            else{
                while(WF[t] > patt[c]){
                    ans = min(q.size(), ans);
                    WF[t]--;
                    q.pop();
                    t = q.top();
                }
            }
        }
    }
}
}

int main(){
string s, p;
getline(cin, s);
getline(cin, p);
}
