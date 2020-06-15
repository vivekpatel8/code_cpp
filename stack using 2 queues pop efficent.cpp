#include<bits/stdc++.h>
using namespace std;

int main(){
queue <int> q1;
queue <int> q2;

int num;
cin>>num;
while(num != -1){
    q2.push(num);
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1 ,q2);
    cin>>num;
}
while(!q1.empty()){
    cout<<q1.front()<<endl;
    q1.pop();
}
}
