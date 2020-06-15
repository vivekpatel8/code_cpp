#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
vector <string> v1;
map <string , int> m;
void nextP(string in, int l, int r){
if(l == r){
    string s1 = in;
    if(m.find(s1) == m.end()){
    v1.push_back(s1);
    m[s1]++;
    }
    else{

    }

    return;
}
for(int k = l;k<=r;k++){
swap(in[l], in[k]);
nextP(in, l+1, r);
}
}

int main(){
string s;
cin>>s;
int len = s.length();
nextP(s, 0,len-1);
sort(v1.begin(), v1.end());
for(int  i = 0;i<v1.size();i++){
        cout<<v1[i]<<endl;
}
}
