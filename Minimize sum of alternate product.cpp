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
    ll ans = 0;
    for(int i = 0;i<n/2;i++){
        ans += (arr[i] * arr[n-i-1]);
    }
    cout<<ans<<endl;
}

}
