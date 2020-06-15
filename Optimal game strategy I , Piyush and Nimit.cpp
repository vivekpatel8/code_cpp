#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int sum = 0;
for(int i = n-1;i>=0;i-=2){
    sum+= arr[i];
}
int sum1 = 0;
for(int i = 0;i<n;i+=2){
    sum1+= arr[i];
}
cout<<max(sum,sum1);
}
