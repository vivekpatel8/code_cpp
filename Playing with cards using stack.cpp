#include<bits/stdc++.h>
using namespace std;
vector <int> primes;
#define ll long long
void pr(){
bool p[100005] = {0};
for(ll i = 2;i<=100000;i++){
    if(p[i] == 0){
        primes.push_back(i);
        for(ll j = i*i;j<=100000;j+=i){
            p[j] = 1;
        }
    }
}
}

int main(){
pr();
int n, q;
cin>>n>>q;
stack <int> a[q+1];
stack <int> b[q+1];
int i = 0;
while(i<n){
    i++;
    int num;
    cin>>num;
    a[0].push(num);
}
for(int i = 0;i<q;i++){
    while(!a[i].empty()){
        if(((a[i].top()) % (primes[i])) == 0){
            b[i+1].push(a[i].top());
            a[i].pop();
        }
        else{
            a[i+1].push(a[i].top());
            a[i].pop();
        }
    }
}
for(int j = 1;j<=q;j++){
    while(!b[j].empty()){
        cout<<b[j].top()<<endl;
        b[j].pop();
    }
}
while(!a[q].empty()){
    cout<<a[q].top()<<endl;
    a[q].pop();
}
}
