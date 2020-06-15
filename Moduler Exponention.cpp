#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ModExpo(int a, unsigned int b, int c){
int ans = 1;
if(a == 0)
    return 0;
a = a % c;
while(b>0){
    if((b&1)>0)
        ans = (ans * a) % c;
    b = (b>>1);
    a = (a * a) % c;
}
return ans;
}
int main(){
int a, b, c;
cin>>a>>b>>c;
cout<<ModExpo(a, b, c)<<endl;
}
