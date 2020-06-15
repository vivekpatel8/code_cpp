#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool canPlace(int arr[9][9], int num, int i , int j, int n){
for(int x = 0;x<n;x++){
    if(arr[i][x] == num || arr[x][j] == num){
        return false;
    }
}

int sn = sqrt(n);
int sx = (i/sn)*sn;
int sy = (j/sn)*sn;

for(int x = sx;x<sx+sn;x++){
    for(int y = sy;y<sy+sn;y++){
        if(arr[x][y] == num){
                return false;
        }
    }
}
return true;
}

bool solveSuduko(int arr[9][9], int i, int j, int n){
if(i == n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return true;
}
if(j == n)
   return solveSuduko(arr, i+1, 0, n);
if(arr[i][j] != 0)
   return solveSuduko(arr, i, j+1, n);

for(int k = 1;k<=n;k++){
    if(canPlace(arr, k, i, j, n)){
        arr[i][j] = k;
        bool canWePlace = solveSuduko(arr, i, j+1, n);
        if(canWePlace){
            return true;
        }
    }
}
arr[i][j] = 0;
return false;
}

int main(){
int n;
cin>>n;
int arr[9][9];

for(int i  = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        cin>>arr[i][j];
    }
}
solveSuduko(arr,0 , 0, n);
}
