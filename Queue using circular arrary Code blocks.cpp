#include<iostream>
using namespace std;

class queue{
int ms;
int cs;
int front;
int rear;
int * arr;

public:
    queue(int rs = 7){
      this->ms = rs;
      this->arr = new int[ms];
      this->cs = 0;
      this->front = 0;
      this->rear = this->ms - 1;
    }
    bool isEmpty(){
    return this->cs == 0;
    }
    bool isFull(){
    return (this->cs ==  this->ms);
    }
    void enqueue(int num){
    if(!isFull()){
        this->rear = (this->rear + 1) % this->ms;
        this->arr[this->rear] = num;
        this->cs++;
    }
    else{
        cout<<"Queue is full";
    }
    }
    void deQueue(){
    if(!isEmpty()){
        cout<<this->arr[this->front]<<" ";
        this->front = (this->front + 1 ) % this->ms;
        this->cs-=1;
    }
    }
};

int main(){
queue q1;
for(int i = 0;i<7;i++)
q1.enqueue(i);
q1.deQueue();
q1.enqueue(10);
while(!q1.isEmpty()){
    q1.deQueue();
}
}
