#include<iostream>
using namespace std;
bool ratInMaze(char maze[10][10], int sol[][10], int i, int j, int m ,int n){
if(i == m && j ==n){
sol[i][j] = 1;
for(int i = 0;i<=m;i++){
    for(int j = 0;j<=n;j++){
        cout<<sol[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
return true;
}
if(i>m || j >n){
    return false;
}
if(maze[i][j] == 'x'){
    return false;
}

sol[i][j] = 1;
bool rightSucess = ratInMaze(maze, sol, i, j+1, m, n);
bool downSucess = ratInMaze(maze, sol, i+1, j, m,n);
sol[i][j] = 0;
if(rightSucess || downSucess){
    return true;
}

return false;
}

int main(){
int m,n;
cin>>m>>n;
char maze[10][10] = {"0000"    ,"000x"  ,"0x00"    ,"00x0"};
int sol[10][10] = {0};
bool yes = ratInMaze(maze, sol, 0,0,m-1,n-1);
if(yes == false){
    cout<<"no Soln";
}
return 0;
}
