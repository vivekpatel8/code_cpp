#include<bits/stdc++.h>
using namespace std;

void f(char * in, char * out, int i , int j){
if(in[i] == '\0'){
    out[j] = '\0';
    cout<<out<<endl;
    return;
}
int digit = in[i] - '0';
char ch = 'A' + digit - 1;
out[j] = ch;
f(in, out, i+1, j+1);
if(in[i+1] != '\0'){
  int secondDigit = in[i+1] - '0';
  secondDigit = (digit * 10) + secondDigit;
  if(secondDigit <= 26){
  ch = 'A' + secondDigit - 1;
  out[j] = ch;
  f(in, out, i+2, j+1);
}}
}

int main(){
char in[100];
char out[100];
cin>>in;
f(in, out, 0, 0);
}
