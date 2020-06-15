#include<bits/stdc++.h>
using namespace std;

bool canWeKeep(int arr[60][60], int i, int j, int n, int m){
for(int x = 0;x<n;x++){
    if(arr[x][j] == 1){
        return false;
    }
}
for(int x = 0;x<m;x++){
    if(arr[i][x] == 1){
        return false;
    }
}

return true;
}
int turn = 1;
void game(int arr[60][60], int i, int n, int m){
if(i == n){
    return ;
}
for(int j = 0;j<m;j++){
    if(canWeKeep(arr, i, j, n, m)){
        arr[i][j] = 1;
        turn = turn + 1;
        game(arr, i+1, n, m);
    }
}

game(arr, i+1, n, m);

}


int main(){
int t;
cin>>t;
while(t--){
    int n, m;
    cin>>n>>m;
    int arr[60][60];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    turn = 1;
    game(arr, 0, n, m);
    if(turn % 2 == 0){
        cout<<"Ashish"<<endl;
    }
    else{
        cout<<"Vivek"<<endl;
    }
}
return 0;
}
