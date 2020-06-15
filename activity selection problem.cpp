#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool comp(pair <int,int> p1, pair <int , int> p2){
    return p1.second < p2.second;
}
int main(){
int T;
cin>>T;
while(T--){
    int n;
    cin>>n;
    pair <int , int > p1[n];
    int n1,n2;
    for(int i = 0;i<n;i++){
        cin>>p1[i].first;
        cin>>p1[i].second;
    }
    sort(p1,p1+n,comp);
    int tim = p1[0].second;
    int co = 1;
    for(int i = 1;i<n;i++){
        if(p1[i].first >= tim){
            tim = p1[i].second;
            co++;
        }
    }
    cout<<co;
}

}
