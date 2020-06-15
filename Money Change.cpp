#include<iostream>
#include<algorithm>
using namespace std;
bool comp(int a , int b){
return a<=b;
}
int main(){
int num;
cin>>num;
int c[] = {1,2,5,10,50,100,200,500,2000};
int len  = sizeof(c)/sizeof(int);

while(num){
int  lb = lower_bound(c,c+len,num,comp) - c -1;
num = num - c[lb];
cout<<c[lb]<<" ";
}
}
