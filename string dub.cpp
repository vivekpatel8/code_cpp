#include<iostream>
using namespace std;

void putStarInString(string str, int n, int i){
if(i == n){
    return;
}
if(str[i] == str[i+1]){
    cout<<str[i]<<"*";
}
else{
    cout<<str[i];
}
putStarInString(str, n, i+1);
}
int main(){
string str;
cin>>str;
int len = str.length();
putStarInString(str, len, 0);
}
