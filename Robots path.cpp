#include<bits/stdc++.h>
using namespace std;

int arr[100][100] = {0};

int RobotsPaths(int row, int col){

if(arr[0][0] == -1)return 0;

if(arr[row-1][col-1] == -1)return 0;

for(int i = 0;i<col;i++){
    if(arr[0][i] == -1)break;
    arr[0][i] = 1;
}
for(int i = 0;i<row;i++){
    if(arr[i][0] == -1)break;
    arr[i][0] = 1;
}
for(int i = 1;i<row;i++){
    for(int j = 1;j<col;j++){
        if(arr[i][j] == -1)continue;
        if(arr[i-1][j] != -1)arr[i][j] = arr[i-1][j];
        if(arr[i][j-1] != -1)arr[i][j] += arr[i][j-1];
    }
}
return arr[row-1][col-1];
}

int main(){
int n, m, k;
cin>>n>>m>>k;

while(k--){
    int i, j;
    cin>>i>>j;
    arr[i-1][j-1] = -1;
}
cout<<RobotsPaths(n, m);
}
