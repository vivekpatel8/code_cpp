#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int zero = 0;
int power = 5;
while((n/power)>0){
    zero += n/power;
    power =  power * 5;
}
cout<<zero;
}
