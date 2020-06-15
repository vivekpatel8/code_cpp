#include<iostream>
using namespace std;
int strtonum(string str, int len, int num = 0, int p = 1){

if(len == -1){
    return num;
}
num += ((str[len] - '0')%10)*p;
p = p*10;
return strtonum(str, len-1, num, p);
}
int main(){
string str;
cin>>str;
int len = str.length();
cout<<strtonum(str, len-1);
}
