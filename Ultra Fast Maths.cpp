#include<iostream>
#include<string>
using namespace std;

int main(){
int T;
cin>>T;
while(T--){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i = 0;i<s1.length();i++){
        if(s1[i] == '1' && s2[i] == '1'){
            cout<<'0';
        }
        else if(s1[i] == '1' && s2[i] == '0'){
            cout<<'1';
        }
        else if(s1[i] == '0' && s2[i] == '1'){
            cout<<'1';
        }
        else if(s1[i] == '0' && s2[i] == '0'){
            cout<<'0';
        }
    }
}
}
