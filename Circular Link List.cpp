#include<iostream>
using namespace std;

class Node{
public :
    int data;
    Node * next;
    Node(int data = 0){
    this->data = data;
    next = NULL;
    }
};

class circularLinkList{
public:
Node * head ;
circularLinkList(){
     head = NULL;
}
void Append(int val){
Node * n = new Node(val);
Node * ptr = head;
if(head == NULL){
    head = n;
    n->next = head;
}
else{
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr->next = n;
    n->next = head;
}
}
void traverse(){
Node * ptr = head;
if(head == NULL){
    cout<<"Link List is Empty"<<endl;
}
else if(ptr->next == head){
    cout<<ptr->data<<endl;
}
else{
    while(ptr->next != head){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    cout<<ptr->data;
}
}
};
int main(){
circularLinkList cl;

    cl.Append(11);
    cl.Append(22);
    cl.Append(33);

cl.traverse();
}
