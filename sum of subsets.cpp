#include<iostream>
using namespace std;
bool sumZero(int arr[], int j){
int sum = 0;
for(int i =0;i<=j;i++){
    sum+= arr[i];
}
if(sum == 0){
    return true;
}
else{
    return false;
}
}
bool subS(int arr[],int out[], int n, int i, int j,bool yes){
if(i == n){
    if(yes)
        return true;
    else
        return false;
}
out[j] = arr[i];
if(sumZero(out, j)){
     yes = true;
}
subS(arr,out,n, i+1,j+1, yes);
subS(arr,out, n, i+1,j, yes);
}
int main(){
int n;
cin>>n;
int arr[n];
int out[100];
bool yes = false;
for(int i =0;i<n;i++){
    cin>>arr[i];
}
if(subS(arr, out, n, 0, 0, yes) == true)
    cout<<"yes";
else
    cout<<"no";
}
