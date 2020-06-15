#include<bits/stdc++.h>
using namespace std;

stack <int> deletemid(stack <int> s, int sizeofstack, int c){
int mid = sizeofstack / 2;
static stack <int> s1;
if(s.empty())return s1;
if(mid == c){
s.pop();
}
int temp = s.top();
s.pop();
deletemid(s, sizeofstack, c+1);
s1.push(temp);
}
int main(){
stack <int> s;
int n;
cin>>n;
while(n != -1){
    s.push(n);
    cin>>n;
}
int len = s.size();
 stack <int> s1  = deletemid(s, len, 0);
while(!s1.empty()){
    cout<<s1.top()<<endl;
    s1.pop();
}
}
