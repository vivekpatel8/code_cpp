#include<iostream>
#include<algorithm>
using namespace std;

void rotate_stl(int arr[][4],int r,int c){
for(int i = 0;i<r;i++){
    reverse(arr[i],arr[i]+4);
}
for(int i = 0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i<j){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
}
int main(){
int arr[4][4];
for(int i = 0;i<4;i++){
    for(int j = 0;j<4;j++){
        cin>>arr[i][j];
    }
}
rotate_stl(arr,4,4);
for(int i = 0;i<4;i++){
    for(int j = 0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
