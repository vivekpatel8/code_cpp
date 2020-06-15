#include<iostream>
using namespace std;
int f(int n){
if(n == 0)return 0;
int k = f(n-1);
return k;
}

int main(){
cout<<f(5);
}

