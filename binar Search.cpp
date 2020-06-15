#include<iostream>
using namespace std;

void binarySearch(int arr[],int left,int right,int x){
    int mid = left +(right - left)/2;
    if(arr[mid] == x){
        cout<<mid<<endl;
    }
    else if(arr[mid]>x){
        binarySearch(arr,left,mid,x);
    }
    else{
        binarySearch(arr,mid,right,x);
    }

}
int main(){
int arr[10];
int n = 0;
while(n<10){
    cin>>arr[n];
    n++;
}
binarySearch(arr,0,9,5);
}
