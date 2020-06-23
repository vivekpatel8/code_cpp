#include<bits/stdc++.h>
using namespace std;

int main(){
string str, patt;
cin>>str>>patt;

int len_str = str.length();
int len_patt = patt.length();

for(int i = 0;i<= len_str - len_patt;i++){
    int j;
    for(j = 0;j<len_patt;j++){
        if(patt[j] != str[i + j])break;
    }
    if(j == len_patt)cout<<i<<" ";
}

}
