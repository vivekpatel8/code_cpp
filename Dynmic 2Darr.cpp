#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int **arr;
int r , c;
cin>>r;
cin>>c;
arr = new int*[r];
for(int i = 0;i<r;i++){
    arr[i] = new int[c];
}
int cp = 1;
for(int i = 0;i<r;i++){
    for(int j = 0;j<c;j++){
        arr[i][j] = cp;
        cp++;
        cout<<arr[i][j];
    }
    cout<<endl;
}

}
