#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(string s1, string s2){
    int lens1 = s1.length();
    int lens2 = s2.length();
    int min1 = min(lens1, lens2);
            for(int i = 0;i<min1;i++){
                if(s1.at(i) == s2.at(i)){
                }
                else{
                    return s1<s2;
                }
            }
    return s1>s2;
}
int main(){
int n;
cin>>n;
string s[n];
for(int i = 0;i<n;i++){
    cin>>s[i];
}
sort(s,s+n,comp);
for(int i = 0;i<n;i++){
    cout<<s[i]<<endl;
}
}
