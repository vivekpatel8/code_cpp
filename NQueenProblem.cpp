#include<iostream>
using namespace std;
bool isSafe(int arr[][10], int i, int j, int n){
    // checking for column
    for(int k = 0;k<i;k++){
        if(arr[k][j] == 1){
            return false;
        }
    }
    // for left diagonal
    int x = i;
    int y = j;
    while(x>=0 && y>=0){
        if(arr[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }
    // checking for right diagonal
    x = i;
    y = j;
    while(x>=0 && y<n){
        if(arr[x][y] == 1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}
bool PlaceNQueen(int arr[][10], int i, int n){
    if(i==n){
        for(int x = 0;x<n;x++){
            for(int y = 0;y<n;y++){
                if(arr[x][y] == 1){
                    cout<<"Q ";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    for(int j = 0 ; j<n;j++){
        if(isSafe(arr, i, j, n)){
            arr[i][j] = 1;
            bool QueenRakPaye = PlaceNQueen(arr, i+1, n);
            if(QueenRakPaye){
                return true;
            }
        }
        arr[i][j] = 0;
    }
    return false;
}
int main(){
int n;
cin>>n;
int arr[10][10];
PlaceNQueen(arr, 0, n);
}
