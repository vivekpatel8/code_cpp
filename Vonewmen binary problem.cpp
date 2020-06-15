#include<iostream>
using namespace std;
int main(){
int T;
cin>>T;
while(T--){
int n;
cin>>n;
int i = 0;
int sum = 0;
while(n){
    int power = (1<<i);
    sum += (n%10)*(power);
    i++;
    n = n/10;
}
cout<<sum<<endl;
}}
