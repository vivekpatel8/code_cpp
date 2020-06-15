#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool canWePlace(int arr[][9], int i, int j, int n, int number){

    int sq = sqrt(n);
    int x = (i/sq)*sq;
    int y = (j/sq)*sq;
    for(int u = x;u<x+sq;u++){
        for(int v = y;v<y+sq;v++){
            if(arr[u][v] == number){
                return false;
            }
        }
    }
        for(int u = 0;u<n;u++){
         if(arr[u][j] == number || arr[i][u] == number){
                return false;
            }
        }
return true;
}
bool SolveSudoko(int arr[][9], int i, int j, int n){
if(i == n){
        for(int u = 0;u<n;u++){
        for(int v = 0;v<n;v++){
            cout<<arr[u][v]<<" ";
        }
        cout<<endl;
    }

    return true;
}

if(j == n){
    return SolveSudoko(arr,i+1,0,n);
}
if(arr[i][j] != 0){
    return SolveSudoko(arr,i,j+1,n);
}
for(int number = 1;number<=n;number++){
    if(canWePlace(arr,i,j,n,number)){
        arr[i][j] = number;
        bool yes = SolveSudoko(arr, i, j+1, n);
        if(yes){
            return true;
        }
    }
}
arr[i][j] = 0;
return false;
}
int main(){
int arr[9][9]= { {3, 0, 6, 5, 0, 8, 4, 0, 0},
               {5, 2, 0, 0, 0, 0, 0, 0, 0},
               {0, 8, 7, 0, 0, 0, 0, 3, 1},
               {0, 0, 3, 0, 1, 0, 0, 8, 0},
               {9, 0, 0, 8, 6, 3, 0, 0, 5},
               {0, 5, 0, 0, 9, 0, 6, 0, 0},
               {1, 3, 0, 0, 0, 0, 2, 5, 0},
               {0, 0, 0, 0, 0, 0, 0, 7, 4},
               {0, 0, 5, 2, 0, 6, 3, 0, 0} };
SolveSudoko(arr, 0, 0, 9);
}
