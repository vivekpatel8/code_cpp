#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max1 00

int main(){
string str;
cin>>str;
int len = str.length();
int sum = 0;
int k = 0;
for(int i = len-1;i>=0;i--){
    sum+= (str[i]-'0')*(1<<k);
    k++;
}
cout<<sum;
}
