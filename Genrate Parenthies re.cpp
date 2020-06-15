#include<iostream>
using namespace std;

void f(string s, int n, int i, int open, int close){
if(i == n*2){
    cout<<s<<endl;
    return;
}
if(open < n){
    f(s+'(' , n,i+1 ,open+1, close);
}
if(close < open ){
    f(s+')', n,i+1, open, close + 1);
}
}

int main(){
f("", 3, 0, 0, 0);
}
