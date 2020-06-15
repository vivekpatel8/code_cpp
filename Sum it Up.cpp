#include<iostream>
#include<bits/stdc++.h>
using namespace std;
map <string , int>m;
void f(int in[], int out[] , int i, int j, int n, int t){
if(i == n){
    int sum = 0;
    out[j] = '\0';
    string s1 ="";
    for(int k = 0;k<j;i=k++){
        if(sum<=t){
            sum += out[k];
            s1 += to_string(out[k]) ;
        }

        else{
        break;
        }
    }
    if(sum == t && m.find(s1) == m.end()){
        for(int k = 0;k<j;k++){
            cout<<out[k]<<" ";
        }
        m[s1]++;
        cout<<endl;
    }

     return;
}
out[j] = in[i];
f(in, out, i+1, j+1, n, t);
f(in, out, i+1, j, n, t);

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int t;
cin>>t;
int out[n];
sort(arr, arr+n);
f(arr, out, 0,0,n,t);

}
