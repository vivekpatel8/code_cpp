#include<iostream>
using namespace std;

int main(){
int r,c;
cin>>r;
cin>>c;
int arr[r][c];
for(int i = 0;i<r;i++){
    for(int j = 0;j<c;j++){
        cin>>arr[i][j];
    }
}
for(int i = 0;i<r;i++){
    for(int j = 0;j<c;j++){
        if((i+1)%2 != 0){
            cout<<arr[j][i]<<", ";
        }
        else{
            cout<<arr[r-1-j][i]<<", ";
        }

    }
}
cout<<"END";
}
