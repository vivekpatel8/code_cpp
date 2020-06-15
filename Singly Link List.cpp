#include<iostream>
#include <cstdlib>
using namespace std;

class Node{
public:

    int data;
    Node * next;
    Node(){

    data = 0;
    next = NULL;
    }
    Node(int data1){

    data = data1;
    next = NULL;
    }
};

class SinglyLinkList{
public:
Node * head;
SinglyLinkList(){
head = NULL;
}
void Append(int val){
Node * n1 = new Node(val);
Node * ptr;
ptr = head;
if(head == NULL){
    head = n1;
}
else{
    while(ptr->next!=NULL){
    ptr = ptr->next;
}
ptr->next = n1;
}
}
void Travese(){
    Node * ptr;
    ptr = head;
if(ptr == NULL){
    cout<<"LinkList id empty";
    return ;
}
else{

while(ptr != NULL){
    cout<< ptr->data<<endl;
    ptr = ptr->next;
}
}
}
void prepend(int val){
Node * n1 = new Node(val);
if(head == NULL){
    head = n1;
}
else{
    n1->next = head;
    head = n1;
}
}
void insertAtPos(int pos,int val){
Node * n1 = new Node(val);
Node * ptr = head;
int count = pos;
while(count>1){
    ptr = ptr->next;
    count--;
}
n1->next = ptr->next;
ptr->next = n1;
}
void deletePos(int pos){
    Node * ptr = head;
    int count  = 0;
    if(ptr == NULL){
        cout<<"LinkList is Empty"<<endl;
        return;
    }
    else{
    while(count>2){
        ptr = ptr->next;
    }
    }
    ptr->next = ((ptr->next)->next);
    free(ptr->next);
}
};
int main(){
SinglyLinkList s1;
s1.Append(11);
s1.Append(22);
s1.Append(44);
s1.insertAtPos(2,33);
s1.deletePos(2);
s1.Travese();
}
