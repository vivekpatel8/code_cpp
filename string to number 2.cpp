#include<bits/stdc++.h>
using namespace std;

int f(string s, int n){
if(n == 0)return 0;
int d = (s[n-1] - '0');
int smallans = f(s, n-1);
return (smallans * 10) + d;
}

int main(){
cout<<f("12345", 5);
}
