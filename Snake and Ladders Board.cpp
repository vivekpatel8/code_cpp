#include<bits/stdc++.h>
using namespace std;

class graph{
unordered_map<int, list<int>> um;
public:

    void addNode(int x, int y){
    um[x].push_back(y);
    }

    int bfs(int s, int n){
    int dis[(n + 1)];
    for(int i = 0;i<=n;i++)dis[i] = INT_MAX;
    dis[s] = 0;
    queue <int> q;
    q.push(s);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int nbr : um[node]){
            if(dis[nbr] == INT_MAX){
                dis[nbr] = dis[node] + 1;
                q.push(nbr);
            }
        }
    }
    return dis[n];
    }
};



int main(){
int t;
cin>>t;
while(t--){
int n, l, s;
cin>>n>>l>>s;
int board[(n + 1)];
for(int i = 0;i<=n;i++)board[i] = i;

for(int i = 0;i<l;i++){
    int x , y;
    cin>>x>>y;
    board[x] = (y - x);
}

for(int i = 0;i<s;i++){
    int x , y;
    cin>>x>>y;
    board[x] = (y - x);
}
graph g;
for(int i = 0;i<=n;i++){
    for(int dice = 1;dice <=6;dice++){
        int j = board[i] + dice;
        g.addNode(i, j);
    }
}
g.addNode(n, n);
cout<<g.bfs(0, n)<<endl;
}
}


/*
Given a snake and ladder board, find the minimum number of dice throws required to reach the destination or last cell from source or 1st cell. The player has total control over outcome of dice throw and wants to find out minimum number of throws required to reach last cell.

Input Format
First line contains integer t as number of test cases. Each test case contains following input. First line contains three integers n, l, s which represents the number of cell of board, number of ladders and number of snakes. Following l lines contains the description of ladders and next s lines contains description of snakes.



Constraints
1 < t < 20 1< n,l,s < 50

Output Format
For each test case you have to print the number which is equal to the minimum number of dice throws to reach the last cell.

Sample Input
1
30 4 4
3 22
5 8
11 26
20 29
17 4
19 7
21 9
27 1
Sample Output
3
Explanation
Player start from the first cell. It goes to 1st 3 (then reach at 22) and then 28 and then 30. Total number of dice thrown is 3.
*/
