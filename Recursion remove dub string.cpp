#include<iostream>
using namespace std;
void removeDub(string str, int len, int i =0){
if(i == len){
    return ;
}
if(str[i] == str[i+1]){
    removeDub(str, len, i+1);
}
else{
    cout<<str[i];
    removeDub(str, len, i+1);
}
}
int main(){
string s;
cin>>s;
int len = s.length();
removeDub(s, len, 0);
}
