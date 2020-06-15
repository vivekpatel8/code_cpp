#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string returnStringAtKey(string a, int key){
    char * s = strtok((char *)a.c_str()," ");
    while(key>1){
        s = strtok(NULL, " ");
        key--;
    }
    return s;
}
bool comparelex(pair <string , string> p1, pair <string, string> p2 ){
if(p1.second <= p2.second){
 return true;
}
else{
    return false;
}
}
bool comparenum(pair <string , string> p1, pair <string, string> p2 ){
int a = stoi(p1.second);
int b = stoi(p2.second);
if(a <= b){
return true;
}
else{
return false;
}
}
void sortString(string s[] ,int n, int key, string lex){
pair <string ,string> p[100];
for(int i = 0;i<n;i++){
    p[i].first = s[i];
    p[i].second = returnStringAtKey(s[i], 2);
}
if(lex == "lex")
sort(p, p+n, comparelex);
else
sort(p, p+n, comparenum);
}
int main(){
string s[100];
int n;
cin>>n;
cin.get();
for(int i = 0;i<n;i++){
getline(cin, s[i]);
}
int key;
string lex;
cin>>key;
cin>>lex;
sortString(s,n,key,lex);
for(int i = 0;i<n;i++){
    cout<<s[i]<<endl;
}
}
