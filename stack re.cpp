#include<iostream>
#include<stack>
#include<list>
using namespace std;
template <typename t1>
class stack1{
    list <t1> l1;
    public:
    void push(t1 n){
        l1.push_front(n);
    }
    bool isEmpty(){
    return (l1.size() == 0);
    }
    void pop(){
    if(!isEmpty()){
        cout<< (*l1.begin())<<" ";
        l1.pop_front();
    }
    }
};
int main(){
stack1<string> s1;
stack <int> s;
s.push(1);
cout<<s.top();
s.pop();

}
