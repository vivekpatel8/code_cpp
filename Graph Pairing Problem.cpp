#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll n, m;
cin>>n>>m;

vector<ll> adj[(n )];
bool * vis = new bool[(n)]{false};
unordered_map <ll, ll> um;
ll * arr = new ll[(n )];
while(m--){
    ll x, y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
ll col = 1;
for(ll i = 0;i<n;i++){

    if(!vis[i]){
        col++;
        arr[i] = col;
        queue<ll> q;
        q.push(i);
        while(!q.empty()){
            ll node = q.front();
            q.pop();
            for(int nbr : adj[node]){
                if(!vis[nbr]){
                    vis[nbr] = true;
                    arr[nbr] = col;
                    q.push(nbr);
                }
            }
        }
    }
}

for(ll i = 0;i<n;i++){
    um[arr[i]]++;
}
if(um.size() == 1){
    cout<<0;
}
else{
ll ans = 0;
for(auto x : um){
    ans += ((n - x.second) * x.second) ;
}
cout<<ans / 2;
}}


/*
There are N cities numbered from 0 to N-1. You have to choose 2 cities such that there is no path from first city to second city .
You are given information in the form of M pairs (X,Y) i.e there is an undirected road between city X and city Y.
Find out the number of ways in which cities can be chosen.

Input Format
The first line contains two integers, N and M separated by a single space. M lines follow. Each line contains integers separated by a single space X and Y denoting road between X and Y.

Constraints
1 <= N <= 100000 1 <= M <= 100000 0 <= X,Y <= N-1

Output Format
An integer that denotes the number of permissible ways to choose a pair of cities.

Sample Input
5 3
0 1
2 3
0 4
Sample Output
6
Explanation
0 1 4 cannot be reached by 2 hence (2,0) (2,1) (2,4) and also 0 1 4 cannot be reached by 3 so (3,0) (3,1) (3,4) hence 6 ways.
*/
