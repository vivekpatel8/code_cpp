#include<iostream>
using namespace std;

int dx = {1, 1, -1, -1, -2, -2, 2, 2};
int dy = {2, -2, -2, 2, 1, -1, -1, 1};

bool chess(int arr[10][10], int n, int i, int j, int &cnt){

    if(arr[i][j] == 0)
        return false;
    if(i>=n || j>=n || i <0 || j<0)
        return false;
    if(arr[i][j] != 'v' && arr[i][j] == 1)
       cnt++;

   arr[i][j] = 'v';

}

int main(){
int n;
cin>>n;
char arr[10][10];
for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
    cin>>arr[i][j];
    }
}
}
