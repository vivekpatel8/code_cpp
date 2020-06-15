#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n;
cin>>n;
ll arr[n];
for(ll i = 0;i<n;i++){
    cin>>arr[i];
}
ll k;
cin>>k;
deque <ll> s;
ll i = 1;
s.push_back(0);
while(i<k){
    while(!s.empty() && arr[s.back()] <= arr[i]){
        s.pop_back();
    }
    s.push_back(i);
    i++;
}
while(i<n){
    cout<<arr[s.front()]<<" ";
    while(!s.empty() && i - s.front() >= k){
        s.pop_front();
    }
    while(!s.empty() && arr[s.back()] < arr[i]){
        s.pop_back();
    }
    s.push_back(i);
    i++;
}
while(!s.empty() && n - s.front() <= k ){
    cout<<arr[s.front()]<<" ";
    s.pop_front();
}
}
