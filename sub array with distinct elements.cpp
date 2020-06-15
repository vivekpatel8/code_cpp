#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
unordered_map <int, bool> um;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int ans = 0, j = 0;
for(int i = 0;i<n;i++){
    while(j < n && um[arr[j]] == false){
        um[arr[j]] = true;
        j++;
    }
    ans += ((j - i) * (j - i + 1)) / 2;
    um[arr[i]] = false;
}
cout<<ans;
}
