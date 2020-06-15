#include<bits/stdc++.h>
using namespace std;

bool check(int *arr, int n){
unordered_map <int, int> um;
int sum = 0;
for(int i = 0;i<n;i++){
    sum += arr[i];
    if(sum == 0 or um.find(sum) != um.end()){
        return true;
    }
    um[sum]++;
}
return false;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
cout<<check(arr, n);
}
