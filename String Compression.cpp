#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
cin>>s;
int l = 0, r = 0 , c = 0 , len = s.length();

while(l <= r && r <= len){
    if(s[l] == s[r]){
        c++;
        r++;
    }
    else{
        cout<<s[l]<<c;
        c =0;
        l = r;

    }
}

}
