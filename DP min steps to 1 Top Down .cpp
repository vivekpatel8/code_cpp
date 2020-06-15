#include<bits/stdc++.h>
using namespace std;

int minSteps(int n, int * arr){
if(n == 1)return 0;

if(arr[n] != 0)return arr[n];
int a , b , c;
a = b = c = INT_MAX;
if(n % 2 == 0){
    b = minSteps(n / 2, arr);
}
if(n % 3 == 0){
    c = minSteps(n / 3, arr);
}
a = minSteps(n-1, arr);
int ans = min(a, min(b, c)) + 1;
arr[n] = ans;
return ans;
}

int main(){
int n;
cin>>n;
int arr[100] = {0};
cout<<minSteps(n, arr);
}
