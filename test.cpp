#include<iostream>
#include<utility>
#include<bits/stdc++.h>
using namespace std;
/*int contain(vector< pair<char,int> > p1,char key){
int flag = -1;
for(int i =0;i<p1.size();i++){
if(p1[i].first == key){
    flag = i;
    return flag;
    break;
}
}
if(flag <0)
    return flag;
}*/
bool comp(pair<char , int> v1,pair<char , int> v2){
    return v1.second>v2.second;
}
int frequency(char a[],char b){
    int c = 0;
for(int i = 0;i<strlen(a);i++){
    if(a[i] == b)
        c++;
}
return c;
}

int main(){
vector< pair<char , int> > v1 ;
pair <char,int> p;
char a[1000];
cin>>a;
int len = strlen(a);
int f=0;
for(int i = 0;i<len;i++){
        f = frequency(a,a[i]);
        p = make_pair(a[i],f);
        v1.push_back(p);
}
sort(v1.begin(),v1.end(),comp);
cout<<v1[0].first<<" "<<v1[0].second;
}
