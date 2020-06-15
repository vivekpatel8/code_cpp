#include<bits/stdc++.h>
using namespace std;

int main(){
vector <int> x;
x.push_back(2);
x.push_back(2);
x.push_back(1);
x.push_back(5);
x.push_back(5);
int b = 0;
for(int ans : x){
    b ^= ans;
}
cout<<b;
}
