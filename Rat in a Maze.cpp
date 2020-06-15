#include<iostream>
using namespace std;

bool ratInMaze(char grid[][1001], bool sol[][1001], int i, int j, int n, int m){
if(i == n && j == m){
    sol[i][j] = 1;
    for(int x = 0;x<=n;x++){
        for(int y = 0;y<=m;y++){
            cout<<sol[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return true;
}
if(grid[i][j] == 'X'){
    return false;
}
if(i > n || j > m){
    return false;
}
sol[i][j] = 1;
if(j+1<=m && grid[i][j+1] != 'X'){
bool rightSuccess = ratInMaze(grid, sol, i, j+1, n, m);
if(rightSuccess){
    return true;
}
}
if(i+1 <= n && grid[i+1][j] != 'X'){
bool downSuccess = ratInMaze(grid, sol, i+1, j, n, m);
if(downSuccess){
    return true;
}
}

sol[i][j]= 0;
return false;
}

int main(){
int n, m;
cin>>n>>m;
char grid[1001][1001];
char a;
for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
		cin>>grid[i][j];
    }
}
bool sol[1001][1001] = {0};

if(!ratInMaze(grid, sol, 0, 0, n-1, m-1)){
    cout<<"NO PATH FOUND";
}

}
