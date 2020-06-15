#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
vector < string > v1 ;
void f(string str, int l, int r,string s1){
if(l == r ){
    if(str >s1){
    v1.push_back(str);
    }
    return;
}

for(int i = l;i<=r ;i++){
    swap(str[i], str[l]);
    f(str, l+1, r, s1);
    swap(str[i], str[l]);
}
}

int main(){
string s;
cin>>s;
string s1 = s;
int len = s.length();
f(s, 0, len-1, s1);

sort(v1.begin(), v1.end());
for(int i =0;i<v1.size();i++){
    cout<<v1[i]<<endl;
}
}

