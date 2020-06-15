#include<bits/stdc++.h>
using namespace std;
string s[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void f(long long int n){
if(n == 0){
return;
}
int d = n%10;
f(n/10);
cout<<s[d]<<" ";
}
int main(){
f(2045999000000000999);
}
