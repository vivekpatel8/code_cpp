#include<iostream>
using namespace std;
int n, hi;
int grid[10][10];
void set(int i, int j, int count){
    if(i<0 || j<0 || i>=n || j>=n || grid[i][j] == 0)return;
    grid[i][j] = 0;
    hi = max(hi, count+1);
    set(i-2,j-1,count+1);
    set(i-2,j+1,count+1);
    set(i+2,j-1,count+1);
    set(i+1,j+2,count+1);
    set(i-1,j-2,count+1);
    set(i-1,j+2,count+1);
    set(i+1,j-2,count+1);
    set(i+2,j+1,count+1);
    grid[i][j] = 1;
}

int main(){
cin>>n;
int sum =0;
for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        cin>>grid[i][j];
        if(grid[i][j] == 1)
            sum++;
    }

}
    set(0, 0, 0);
    cout<<sum-hi;

}
