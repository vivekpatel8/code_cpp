#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n;
cin>>n;
ll arr[n];
for(ll i = 0;i<n;i++){
    cin>>arr[i];
}
stack <int> s;
ll top = 0;
ll area , maxarea = 0;
ll i = 0;
while(i<n){
    if(s.empty() || arr[s.top()] <= arr[i]){
        s.push(i++);
    }
    else{
        top = s.top();
        s.pop();
        area = arr[top] * (s.empty() ? i : i - s.top() - 1);
        maxarea  = max(maxarea, area);
    }
}
while(!s.empty()){
    top = s.top();
    s.pop();
    area  = arr[top] * (s.empty() ? i : i - s.top() - 1);
    maxarea = max(maxarea, area);
}
cout<<maxarea;
}
