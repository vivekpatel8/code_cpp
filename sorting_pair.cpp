#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
/*string  returStrTokAtKey(string  s1,int key){
    char * ptr ;
    int n = s1.length();
    string  ans;
    char c[n+1];
    int it;
    for( it= 0;it<n;it++){
        c[it] = s1[it];
    }
    c[it] = '\0';
    if(key==1){
        ptr = strtok(c," ");
    }
    else{
        while(ptr!=NULL)
        ptr = strtok(NULL," ");
    }
    ans = ptr;

    return ans;
} */
string  returStrTokAtKey(string  str,int key){
    char * s = strtok((char *)str.c_str()," ");

    while(key>1){
        s = strtok(NULL," ");
        key--;
    }
    return (string)s;
}
/*void strtokToPair(string s1[],pair <string,string> p1[],int n){
int i =0;
while(i<n){
    p1[i].first =  s1[i];
    p1[i].second = returStrTokAtKey(s1[i],2);

    i++;
}

}*/
bool compareLex(pair <string,string> p1,pair <string,string> p2){
    return p1.second<p2.second;

}
int convertToInt(string s1){
    int no = 0,p =1;
    for(int i = s1.length()-1;i>=0;i--){
        no = no + ((s1[i]-'0')*p);
        p *=10;
    }
    return no;
}
bool compareNum(pair <string,string> p1,pair <string,string> p2){
    string key1 = p1.second,key2 = p2.second;
    return convertToInt(key1)<convertToInt(key2);
}
int main(){
int n;
cin>>n;
cin.get();
string s1[100];
int i =0;

while(i<n){
    getline(cin,s1[i]);
    i++;
}
pair <string ,string> p1[100];
i =0;
while(i<n){
    p1[i].first =  s1[i];
    p1[i].second = returStrTokAtKey(s1[i],2);

    i++;
}
cout<<"enter order";
string order;
cin>>order;
if(order == "lex"){
sort(p1,p1+n,convertToInt);}
else{
sort(p1,p1+n,compareNum);}
for(int x = 0;x<n;x++)
cout<<p1[x].second;
}
