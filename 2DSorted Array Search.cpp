#include<iostream>
using namespace std;
int main(){
int r , c;
cin>>r>>c;
int arr[r][c];
for(int i = 0;i<r;i++){
    for(int j = 0;j<c;j++){
        cin>>arr[i][j];
    }
}

int key;
cin>>key;
int l = 0, ri = c -1;
int flag = 0;
while(l<r && ri< c){
    if(arr[l][ri] == key){
        flag = 1;
        break;
    }
    else if(arr[l][ri] > key){
        ri--;
    }
    else{
        l++;
    }

}
cout<<flag;
}
