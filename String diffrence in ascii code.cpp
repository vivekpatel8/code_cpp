#include<iostream>
#include<cstring>
using namespace std;

int main(){
char a[1000];
cin>>a;
int len = strlen(a);
for(int i = 0;i<len-1;i++){
    cout<<a[i]<<a[i+1] - a[i];
}
cout<<a[len-1];
}
