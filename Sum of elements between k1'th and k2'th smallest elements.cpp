#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int * arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int k1, k2;
    cin>>k1>>k2;
    if(k1>n)k1 = n;
    if(k2>n)k2 = n;
    int x = min(k1, k2);
    int y = max(k1, k2);
    int c = 1, ans = 0;
    for(int i = 0; i<n-1;i++){
        if(arr[i] != arr[i+1])
            c++;
        if(c > x && c < y){
            ans += arr[i+1];
        }
        if(c == y)break;
    }
    cout<<ans<<endl;
}
}
