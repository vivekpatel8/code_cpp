#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int first = arr[0];
int ans = 0;
for(int i = 0;i<n;i++){
    if(arr[i%n]<arr[(i+1)%n])
        cout<<arr[(i+1)%n]<<" ";
    else
        cout<<-1<<" ";
}
}
