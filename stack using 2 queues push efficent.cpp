#include<bits/stdc++.h>
using namespace std;
void stackUsing2Ques(queue  <int> &q1){// just poping out the elements like stack
queue <int> q2;
while(q1.size() != 1){
    q2.push(q1.front());
    q1.pop();
}
cout<<q1.front()<<" ";
swap(q1, q2);
}
int main(){
queue <int> q1;
int n;
cin>>n;
while(n != -1){
    q1.push(n); //same as pushing in stacks in O(1)
    cin>>n;
}
stackUsing2Ques(q1);
stackUsing2Ques(q1);
stackUsing2Ques(q1);
}
