#include<bits/stdc++.h>
using namespace std;

int longestConsequtiveSubSequence(int *arr, int n){
unordered_map <int, bool> um;

for(int i = 0;i<n;i++){
    um[arr[i]] = true;
}
int ans = 0;
for(int i = 0;i<n;i++){
    if(um.find(arr[i]-1) != um.end()){
        continue;
    }
    else{
        int cnt = 0;
        int x = arr[i];
        while(um.find(x) != um.end()){
            cnt++;
            x++;
            ans = max(ans, cnt);
        }
    }
}
return ans;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

cout<<longestConsequtiveSubSequence(arr, n);

}
