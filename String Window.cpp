#include<bits/stdc++.h>
using namespace std;


string minWindowSubstr(string str, string patt){
    int str_len = str.length();
    int patt_len = patt.length();
    if(patt_len > str_len)return "No String";
    int hash_str[256] = {0};
    int hash_patt[256] = {0};

    for(int i = 0;i<patt_len;i++){
        char ch = patt[i];
        hash_patt[ch]++;
    }
    int start = 0, start_idx = -1, min_len = INT_MAX, cnt = 0;
    for(int i = 0;i<str_len;i++){
        char ch = str[i];
        hash_str[ch]++;
        if(hash_patt[ch] != 0 && hash_str[ch] <= hash_patt[ch]){
            cnt++;
        }
        if(cnt == patt_len){
            cnt = 0;
            while(hash_str[str[start]] > hash_patt[str[start]] || hash_patt[str[start]] == 0){
                if(hash_str[str[start]] > hash_patt[str[start]]){
                hash_str[str[start]]--;
                }
                start++;
            }
            int window_len = i - start + 1;
            if(window_len < min_len){
                min_len = window_len;
                start_idx = start;
            }
        }
    }
    if(start_idx == -1)return "No String";
    return str.substr(start_idx, min_len);

}

int main(){
string str, patt;
getline(cin, str);
getline(cin, patt);

cout<<minWindowSubstr(str, patt);
}
