#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;

int main(){
list <pair<int, int>> *l1;
int n;
cin>>n;
l1 = new list<pair<int, int>>[n];
int e;
cin>>e;
int x, y, wt;
for(int i = 0;i<e;i++){
    cin>>x>>y>>wt;
    l1[x].push_back(make_pair(y, wt));
    l1[y].push_back(make_pair(x, wt));
}
for(int i = 0;i<n;i++){
    cout<<i<<" : ";
    for(auto j : l1[i])
    cout<<"( "<<j.first<<", "<<j.second<<" )";
    cout<<endl;
}

}
