#include<bits/stdc++.h>
using namespace std;

int f(int n, string str, int k){
if(n == 1 && str[0] == '0')return 1;
if(n == 1 && str[0] == '1')return 0;
int l = 0;
int ans = 0;
for(int i = 0;i<n;i++){
    if(str[i] == '1'){
        int x = i - l;

        ans += (x / (k+1));
        l = i+1;


    }
}
if(l == 0 && (n & 1) == 1)return (n / (k + 1)) + 1;
else if(l == 0) return  (n / (k + 1));
return ans;
}

int main(){
int t;
cin>>t;
while(t--){
    int n, k;
    cin>>n>>k;
    string str;
    cin>>str;
    cout<<f(n, str, k)<<endl;
}
}
