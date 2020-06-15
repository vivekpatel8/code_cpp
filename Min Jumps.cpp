#include<bits/stdc++.h>
using namespace std;
#define ll long long

pair <int, int> maxJump(int * arr, int idx, int maxS){
    int ans = 0;
    maxS += idx;
    pair <int, int> p1;
for(int i = idx + 1;i<=maxS;i++){
        if(ans < arr[i]){
            ans = arr[i];
            p1 = make_pair(arr[i], i);
        }
}
return p1;
}

int minSteps(int * arr, int n){
if(arr[0] == 0)return INT_MAX;
int res = 0;
int i = 0;
while(i < n){
    res++;
    if(arr[i] == 0)return INT_MAX;
    pair <int, int> p1 =  maxJump(arr, i, arr[i]);
    if(p1.first == 0)return INT_MAX;
    i = p1.second;
}
return res;
}

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++)cin>>arr[i];
cout<<minSteps(arr, n)<<endl;
}

}
