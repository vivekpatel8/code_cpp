#include<iostream>
using namespace std;

class ArrayQueue{
private :
    int front,back,arr[5];
public :
    ArrayQueue(){
    front = -1;
    back = -1;
    for(int i = 0;i<5;i++)
        arr[i]=0;
    }
bool isEmpty(){
if(front == -1 & back == -1)
    return true;
else
    return false;
}
bool isFull(){
if(back == 4)
    return true;
else
    return false;
}
void enQueue(int val){
    if(isFull()){
        return;
    }
    else if(isEmpty()){
        front = 0;
        back = 0;
    }
    else{
        back ++;
    }
arr[back]=val;
}
int deQueue(){
    int x =0;
if(isEmpty()){
    return 0;
}
else if(front==0 && back == 0){
    x= arr[front];
    front--;
    back--;
}
else{
    x = arr[front];
    front ++;
}
return x;
}
};
int main(){
ArrayQueue q1;
q1.enQueue(5);
q1.enQueue(44);
q1.enQueue(54);
q1.enQueue(78);
q1.enQueue(66);

cout<<q1.deQueue()<<endl;
cout<<q1.deQueue()<<endl;
cout<<q1.deQueue()<<endl;
cout<<q1.deQueue()<<endl;
cout<<q1.deQueue()<<endl;
}
