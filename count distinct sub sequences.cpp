#include<bits/stdc++.h>
using namespace std;

unordered_map <string, bool> um;
void f(char * str, char * ans, int i, int j, int &res){
if(str[i] == '\0'){
    ans[j] = '\0';
    string s = ans;
    if(!um.count(s)){
        um[s] = true;
        res++;
    }
    return;
}

f(str, ans, i+1, j, res);
ans[j] = str[i];
f(str, ans, i+1, j+1, res);
}

int main(){
    int t;
    cin>>t;
    while(t--){
    char str[100001];
    cin>>str;
    char ans[100001];
    int res = 0;
    um.clear();
    f(str,ans, 0, 0, res);
    cout<<res%1000000007<<endl;
    }
}
