#include<bits/stdc++.h>
using namespace std;
typedef multiset<int>::iterator It;
class person{
public:
bool operator()(pair <string, int> p1, pair <string, int> p2){
    return(p1.second < p2.second);
}
};
int main(){
multiset <pair<string, int>, person> ms;
string s;
int n;
cin>>s;
cin>>n;
while(n != -1){
    ms.insert(make_pair(s, n));
    cin>>s;
    cin>>n;
}
for(auto x : ms){
    cout<<x.first <<" "<<x.second<<endl;
}
}
