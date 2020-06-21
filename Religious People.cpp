#include<bits/stdc++.h>
using namespace std;
#define ll long long
// question below
int main(){
int t;
cin>>t;
while(t--){
    ll n, m, a, b;
    cin>>n>>m>>a>>b;
    vector <ll> adj[(n+1)];

    bool * vis = new bool[(n+1)]{0};
    queue<ll> q;
    while(m--){ // input for edges
        ll x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll sum = 0;
    for(ll i = 1;i<=n;i++){ // itr all nodes
        if(!vis[i]){ // if its node visited
            q.push(i); // push src node or dis connected node
            while(!q.empty()){ //
                ll node = q.front();
                q.pop();
                if(!vis[node]){ // if node has not been visited
                    sum += a;  // add the cost of temple
                }
                vis[node] = true; // make the node as visited
                for(ll nbr : adj[node]){ // check for its nbr
                    if(!vis[nbr]){ // if its not visited then

                        if(b<= a)sum+= b; // cost of road <= temple
                        else sum+= a; // else add temple

                        q.push(nbr); // push the node in queue
                        vis[nbr] = true; // make nbr as visited
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
}
return 0;
}
/*
All the people living in our imaginary world Bitworld are very religious.
There are N cities in Bitworld numbered from 1 to N.
Due to a storm, every road in Bitworld was destroyed and now no temples are left.
There are 2 types of operations :

You can construct a temple by giving away A dollars in ith city.
You can repair an already existing road by giving away B dollars.

Your goal is to make temples such that people of every city have access to some temple.
People of the ith city can visit the temple only if :
A temple exists in that city.
OR
There is a path from that city to a city which contains a temple. ( the path should consist of repaired roads only )
You have to minimize the total cost such that people in every city can go to a temple and output this minimum cost.

NOTE : You can only repair the roads which existed and not build on your own.

Input Format
The first line consists of number of test cases T. Each test case consists of 4 integers N,M,A,B. which denote number of cities, number of roads which existed , cost to build a temple , cost to repair a road. Next M lines contains M pairs denoted by U V which indicates a road existed between U and V.

Constraints
1 <= T <= 10.
1 <= N <= 100000.
0 <= M <= 100000.
1 <= A,B <= 1000000000.
1 <= U,V <= N.
Each road connects 2 distinct cities.

Output Format
Total minimum cost in dollars.

Sample Input
2
3 3 2 1
1 2
3 1
2 3
6 6 2 5
1 3
3 4
2 4
1 2
2 3
5 6
Sample Output
4
12
Explanation
For first test case:

build temple in city 1 for 2 dollars.
repair road between 1 and 2 and repair road between 2 and 3 for total cost of 1+1 dollars. hence total cost is 4 dollars.
For second test case: You can build a temple in every city for a total cost of 6*2 = 12 dollars.
*/

