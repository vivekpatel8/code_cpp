#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
cin>>n;
int arr[n];
int sum = 0;
for(int i = 0;i<n;i++){
    cin>>arr[i];
    sum+= arr[i];
}

if(sum % n != 0){
    cout<<-1;
}
else{
sum = sum / n;
int x = 0;
int ans1 = 0;
for(int i = 0;i<n;i++){
    x += (arr[i] - sum);
    int ans = max(x, -x);
    ans1 = max(ans1, ans);
}
cout<<ans1;
}
}
