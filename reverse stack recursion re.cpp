#include<bits/stdc++.h>
using namespace std;
void revS(stack <int> & s){
if(s.empty())return;
int n = s.top();
s.pop();
revS(s);
cout<<n<<endl;
}
int main(){
int n;
cin>>n;
stack <int> s;
while(n--){
    int num;
    cin>>num;
    s.push(num);
}
revS(s);
}
