#include<bits/stdc++.h>
using namespace std;
void isZero(int arr[], int n){
bool yes ;
int noOfSubset = (1<<(n))-1;
int k = n-1, sum ;
for(int i = 1;i<=noOfSubset;i++){
    sum  = 0;
    k = n-1;
    int j  = i;
    while(j>0){
    if((j&1) == 1){
        sum+= arr[k];
    }
    k--;
    j = j>>1;
    }
    if(sum == 0){
        cout<<"Yes"<<endl;
        return;
    }
    else{
        yes = false;
    }
}
if(yes == false)
    cout<<"No"<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}
isZero(arr,n);
}
}
