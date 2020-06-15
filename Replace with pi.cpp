#include<iostream>
using namespace std;
void replacePi1(string str, int n,string res, int i = 0){
if(i == n){
    cout<<res;
    return;
}
if(str[i] == 'p' && str[i+1] == 'i'){

   replacePi1(str, n,res+"3.14" ,i+2);
}
else{

   replacePi1(str, n,res+(str[i]), i +1);
}
}
int main(){
int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
    int len = str.length();
    replacePi1(str,len,"",0);
    cout<<endl;
}
}
