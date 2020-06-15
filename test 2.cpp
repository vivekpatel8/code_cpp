#include<bits/stdc++.h>
using namespace std;
void comp(string s1 , string s2){
    int j = 0;
    int len1 = s1.length();
    int len2 = s2.length();
    for(int i = 0;i<len1;i++){
    if(s1[i] ==s2[i]){
        j++;
    }
    }
    cout<<j;
}
int main(){
int n;
cin>>n;
string s[n];
for(int i = 0;i<n;i++){
    cin>>s[i];
}
comp(s[0],s[1]);
}
