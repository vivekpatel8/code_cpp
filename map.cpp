#include<bits/stdc++.h>
using namespace std;

/*struct c{
bool comp()(pair<string, int> p1, pair<string, int> p2){
return p1.second < p2.second;
}};*/

int main(){
map <string , int> m;
m.insert(make_pair("a", 8));
m.insert(make_pair("b", 5));
m.insert(make_pair("c", 4));
m.insert(make_pair("d", 1));
for(auto it : m){
    cout<<it.first<<it.second<<" ";
}
}
