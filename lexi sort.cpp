#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool comp( string a,string b){
string ab = a+b;
string ba = b+a;

return ab.compare(ba) > 0 ? 1 : 0;

}
int main(){
int n ;
cin>>n;
string s[n];

for(int i = 0;i<n;i++){
    cin>>s[i];
}
sort(s,s+n,comp);

for(int i = 0;i<n;i++){
    cout<<s[i];
}

}
