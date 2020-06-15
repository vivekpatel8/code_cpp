#include<iostream>
using namespace std;

bool rat(char in[10][10], bool out[10][10], int i, int j, int n, int m){
if(i == n && j == m){
        out[n][m] = 1;
      for(int x = 0;x<=n;x++){
    for(int y = 0;y<=m;y++){
        cout<<out[x][y]<<" ";
    }
cout<<endl;
}
cout<<endl;
return true;
}
if(in[i][j] == 'X')
    return false;

if(i>n || j>m || i<0 || j<0 || out[i][j])
    return false;

out[i][j] = 1;
    bool left = rat(in, out, i, j-1, n, m);
    bool right = rat(in, out,i, j+1, n, m);
    bool up = rat(in, out, i-1, j, n, m);
    bool down = rat(in, out, i+1, j, n, m);
    out[i][j] = 0;
    if(right || down || up || left){
        return true;
    }
    return false;
}

int main(){
int n, m;
cin>>n>>m;
char in[10][10];
bool out[10][10] = {0};
for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        cin>>in[i][j];
    }
}
bool yes = rat(in, out, 0, 0, n-1, m-1);
if(yes == false){
    cout<<"NO PATH FOUND";
}
}
