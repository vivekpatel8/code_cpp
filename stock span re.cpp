#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
stack <int> s;
for(int i = 0;i<n;i++){
    while(!s.empty() && arr[s.top()] < arr[i]){
        s.pop();
    }
    int betterDays = (s.empty()) ? 0 : s.top();
    int ans = ((i - betterDays) == 0 ) ? 1 : (i - betterDays);
    if(i == 0){
        cout<<"1 ";
    }
    else if(s.empty()){
        cout<<ans+1<<" ";
    }
    else{
    cout<<ans<<" ";}
    s.push(i);
    }
    cout<<"END";
}

