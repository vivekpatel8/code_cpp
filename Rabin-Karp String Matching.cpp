#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
string str;
string patt;
cin>>str>>patt;
int len_str = str.length();
int len_patt = patt.length();

// calculate ascii value of patt
ll ascii_patt = 0, ascii_str = 0;
for(int i = 0;i<len_patt;i++){
    ascii_patt += (int)patt[i];
}

for(int i = 0;i<len_patt;i++){
    ascii_str += (int)str[i];
}

if(ascii_patt == ascii_str){
    string temp = str.substr(0, len_patt);
    if(temp == patt)cout<<0<<" ";
}

for(int i = 1;i<=(len_str - len_patt);i++){
    ascii_str = ascii_str - ((int)str[i - 1]) + ((int)str[i + len_patt - 1]);
    if(ascii_str == ascii_patt){

            int flag = 1;
        for(int j = i, k = 0;j<(i+len_patt);j++, k++){
            if(str[j] != patt[k]){
                flag = 0;break;
            }
        }
        if(flag)cout<<i<<" ";
    }
}

}

