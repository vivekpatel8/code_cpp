#include<bits/stdc++.h>
using namespace std;
/*
// input
3
Rahul Ajay 100
Ajay Neha 50
Neha Rahul 40

*/
int main(){
map<string , int> m;
int t, f;
cin>>t;
string x, y;
int amount;

while(t--){
    cin>>x>>y>>amount;
    if(m.count(x) == 0)
        m[x] = 0;
    if(m.count(y) == 0)
        m[y] = 0;
    m[x] -= amount;
    m[y] += amount;
}
multiset<pair<int, string>> ms;

for(auto x : m){
    string name = x.first;
    int amt = x.second;
    if(m[name] != 0)
    ms.insert(make_pair(amt, name));
}

while(!ms.empty()){
    auto b = ms.begin();
    auto e = prev(ms.end());

    int debit = b->first;
    string debit_per = b->second;
    int credit = e->first;
    string credit_per = e->second;

    int settlement = min(-debit, credit);

    cout<<debit_per<<" will pay "<<settlement<<" to "<<credit_per<<endl;

    settlement = debit + credit;

    ms.erase(b);
    ms.erase(e);

    if(settlement < 0){
        ms.insert({settlement, debit_per});
    }
    else if(settlement > 0){
        ms.insert({settlement, credit_per});
    }
}

}
