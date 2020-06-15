#include<bits/stdc++.h>
using namespace std;

void printQue(stack <int> s1){ // pop like queue using recursion of stack
if(s1.empty())return;
int n = s1.top();
s1.pop();
printQue(s1);
cout<<n<<" ";
}

int main(){
stack <int> s1;
stack  <int> s2;

int num;
cin>>num;
while(num != -1){
    s1.push(num);
    cin>>num;
}
printQue(s1);
/*while(!s1.empty())
{
    s2.push(s1.top());
    s1.pop();
}
swap(s1, s2);
while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
}*/

}
