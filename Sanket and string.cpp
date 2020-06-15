#include<iostream>
#include<string>
using namespace std;
char aORbLess(string s){
    int maxa =0 ,maxb =0 ;
    for(int i = 0;i<s.length();i++){
        if(s[i] == 'a'){
            maxa++;
        }
        else{
            maxb++;
        }
    }
    if(maxa<maxb){
        return 'a';
    }
    else{
        return 'b';
    }
}
int changeStringwhichIsLess(string s,char c,int k){
int max1=1,fmax = 1;
for(int j = 0;j<s.length()-1;j++){
        int k1 = k;
        max1 = 0;
for(int i = j;i<s.length();i++){
    if(k>0){
    if(s[i]!=c){
        max1++;
        fmax = max(max1,fmax);
    }
    else if(s[i] == c){
        max1++;
        k1--;
        fmax = max(max1,fmax);
    }}

}}
return fmax;
}
int main(){
int k;
cin>>k;
string s;
cin>>s;
char c = aORbLess(s);
cout<<changeStringwhichIsLess(s,c,k);
}
