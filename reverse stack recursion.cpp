#include<stack>
#include<iostream>
using namespace std;
void transfer(stack <int> &s1, stack <int> &s2, int n){
while(n--){
    s2.push(s1.top());
    s1.pop();
}
}
void rev(stack <int> &s1){
stack <int> s2;
int n = s1.size();
for(int i =1;i<=n;i++){
    int key = s1.top();
    s1.pop();
    transfer(s1, s2, n-i);
    s1.push(key);
    transfer(s2, s1, n-i);
}
}
void insertAtBottom(stack <int> & s1, int x){
if(s1.empty()){
        s1.push(x);
        return;
}
int y = s1.top();
s1.pop();
insertAtBottom(s1, x);
s1.push(y);
}
void reverseStackRec(stack <int> & s1){
if(s1.empty())return;
int x = s1.top();
s1.pop();
reverseStackRec(s1);
insertAtBottom(s1, x);
}
int main(){
stack <int> s1;
s1.push(1);
s1.push(2);
s1.push(3);
reverseStackRec(s1);
while(!s1.empty()){
cout<<s1.top()<<" ";
s1.pop();
}}
