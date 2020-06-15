#include<iostream>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

int frequency(char a[],char b){
    int c = 0;
for(int i = 0;i<strlen(a);i++){
    if(a[i] == b)
        c++;
}
return c;
}

int main(){

char a[1000];
cin>>a;
int len = strlen(a);
int f=0,nmax = 0;
char cmax ;
for(int i = 0;i<len;i++){
        f = frequency(a,a[i]);
        if(f>nmax){
            nmax = f;
            cmax = a[i];
        }
}
cout<<nmax <<" "<<cmax;
}
