#include<bits/stdc++.h>
using namespace std;

int f(int n){
if(n == 1 || n == 0){
    return n;
}
return f(n-1) + (n * f(n-2));
}

int main(){
cout<<f(4);
}
