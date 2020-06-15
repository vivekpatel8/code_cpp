#include<iostream>
using namespace std;
#include<list>

class que{
int cs = 0;
list <int> l1;
public:
    bool isEmpty(){
    return cs == 0;
    }
    void enque(int num){
    l1.push_back(num);
    cs++;
    }
    void deque(){
    if(!isEmpty()){
    cout<<l1.front();
    l1.pop_front();
    }
    }
};

int main(){
que q1;
q1.enque(10);
q1.deque();
}
