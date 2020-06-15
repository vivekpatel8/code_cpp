#include<bits/stdc++.h>
using namespace std;

void insertstack(stack <int> &s, int element){
if(s.empty() || element > s.top()){
    s.push(element);
}
else {
    int temp = s.top();
    s.pop();
    insertstack(s, element);
    s.push(temp);
}
}

void sortStack(stack <int> &s){
if(s.empty()){
   return;
}
int temp = s.top();
s.pop();
sortStack(s);
insertstack(s, temp);
}

int main(){
stack <int > s;
int n;
cin>>n;
while(n != -1){

    s.push(n);
    cin>>n;
}
sortStack(s);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
}
