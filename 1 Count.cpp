#include<bits/stdc++.h>
using namespace std;

void f(int * arr, int n, int k){
    int l = 0, x = 0, y = 0;
    int zero = 0, ans = 0;
    if(n == 1 && k == 0){
        cout<<0<<endl<<0;
    }
    else{
    for(int i = 0;i<n;i++){ // i working as right pointer
        if(arr[i] == 0)zero++;

        while(zero > k){
            if(arr[l] == 0)
            zero--;
            l++;
        }
        if(ans < i - l + 1){
            x = l;
            y = i;
            ans = i - l + 1;
        }
    }
    cout<<ans<<endl;
    for(int i = 0;i<n;i++){
        if(i >= x && i <= y){
            cout<<1<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }}
}

int main(){
int n, k;
cin>>n>>k;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
f(arr, n, k);
}
