#include<bits/stdc++.h>
using namespace std;

bool IfsalEqual(pair <string, int> p1, pair <string, int> p2 ){
if(p1.second == p2.second){
    return p1.first < p2.first;
}
else{
    return p1.second > p2.second;
}
}
int main(){
int ts;
cin>>ts;
int n;
cin>>n;
int n1 = n;
pair <string , int> *p1 = new pair<string , int>[n];
for(int i = 0;i<n;i++){
    string name;
    int sal;
    cin>>name;
    cin>>sal;
    if(sal<ts){
        i--;
        n--;
    }
    else{
        p1[i] = make_pair(name, sal);
    }
}
sort(p1,p1+n,IfsalEqual);
for(int i = 0;i<n;i++){
    cout<<p1[i].first<<" "<<p1[i].second<<endl;
}
}
