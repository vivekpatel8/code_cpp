#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
stack <int> s1;
stack <int> s2;
for(int i = 0;i<n;i++){
    s1.push(i);
}
while(!s1.empty()){
    s2.push(s1.top());
    s1.pop();
}
while(!s2.empty()){
    cout<<s2.top()<<" ";
    s2.pop();
}
}
