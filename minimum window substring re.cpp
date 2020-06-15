#include<bits/stdc++.h>
using namespace std;

string minLenSubStr(string s, string p){
int slen = s.length();
int plen = p.length();
if(plen > slen){
    cout<<"Not Possible";
    return "";
}
int hash_str[256] = {0};
int hash_patt[256] = {0};
for(int i = 0;i<plen;i++){
    hash_patt[p[i]]++;
}
int cnt = 0, start = 0, start_idx = -1, min_len = INT_MAX;
for(int i = 0;i<slen;i++){
    char c = s[i];
    hash_str[c]++;
    if(hash_patt[c] != 0 && hash_str[c] <= hash_patt[c]){
        cnt++;
    }
    if(cnt == plen){
        while(hash_patt[s[start]] == 0 || hash_str[s[start]] > hash_patt[s[start]]){
            if(hash_str[s[start]] > hash_patt[s[start]]){
                hash_str[s[start]]--;
            }
            start++;
        }
        int window_len = i - start + 1;
        if(min_len > window_len){
            min_len = window_len;
            start_idx = start;
        }
    }
}

if(start_idx == -1){
    cout<<"not possible";
    return "";
}
return s.substr(start_idx, min_len);
}

int main(){
string s, p;
getline(cin, s);
getline(cin, p);
cout<<minLenSubStr(s, p);
}
