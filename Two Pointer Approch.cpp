#include<iostream>
using namespace std;

void sumOfPair(int arr[],int n,int key){
int l = 0;
int r = n-1;
while(r>l){
    int mid = (l+r)/2;
    if(arr[l]+arr[r] == key){
        cout<<l<<" and "<<r<<endl;
        return ;
    }
    else if(arr[l]+arr[r] < key){
        l++;
    }
    else{
        r--;
    }
}
}
int main(){
int arr[10];
for(int i = 0;i<10;i++){
    cin>>arr[i];
}
sumOfPair(arr,10,10);
}
