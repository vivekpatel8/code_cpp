
#include<iostream>
using namespace std;
#define ll long long int
//correct solution
bool IfPossible(ll arr[], ll n, ll k, ll mid){
ll pallerUsed = 1, boatPalled = 0;
for(ll i = 0;i<n;i++){
    if(boatPalled  + arr[i] > mid){
        pallerUsed++;
        boatPalled = arr[i];
        if(pallerUsed > k){
            return false;
        }
    }
    else{
        boatPalled += arr[i];
    }
}
return true;
}

int main(){
ll  k, t;
ll n;
ll arr[100005];
cin>>n>>k>>t;
ll l = 0;
ll r = 0;
for(ll i = 0;i < n;i++){
    cin>>arr[i];
    l = max(l,arr[i]);
    r = r + arr[i];
}
ll ans = 0;
while(l<=r){
    ll mid = (l+r)/2;
    bool yes = IfPossible(arr, n, k,mid);
    if(yes){
        ans = mid;
        r = mid - 1;
    }
    else{
        l = mid + 1;
    }
}

cout<<(ans*t)%10000003;

}
