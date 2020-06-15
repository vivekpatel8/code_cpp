#include<bits/stdc++.h>
using namespace std;

int longestSubArraySum(int * arr, int n){
int pre = 0;
int len = 0;
unordered_map <int, int> um;
for(int i = 0;i<n;i++){
    pre += arr[i];
    //if(arr[i] == 0 && len == 0)len = 1;
    if(pre == 0)len = max(len , i + 1);
    if(um.find(pre) != um.end()){
        len = max(len, i - um[pre]);
    }
    else{
        um[pre] = i;
    }
}
return len;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
cout<<longestSubArraySum(arr, n)<<endl;
}
