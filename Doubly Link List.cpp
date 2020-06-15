#include<iostream>
using namespace std;

class Node{
public :
    Node * pre;
    int data;
    Node * next;

    Node(int data = 0 ){
    pre = NULL;
    this->data = data;
    next = NULL;
    }
};
class DNode{
public :
    Node  * head;
    DNode(){
    head = NULL;
    }
    void Append(int val){
    Node * n = new Node(val);
    Node * ptr ;
    ptr = head;
    if(head == NULL){
        head = n;
        head->next = NULL;
        head->pre = NULL;
    }

    else{
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
            ptr->next = n;
            n->pre = ptr;
    }

    }
    void traverse(){
    Node * ptr;
    ptr = head;

    if(head  == NULL){
        cout<<"Link List is empty"<<endl;
    }
    else{
        while(ptr!= NULL){
            cout<<ptr->data<<endl;
            ptr = ptr->next;
        }
    }
    }
    void prepend(int val){
    Node * n = new Node(val);
    if(head == NULL){
        head = n;
    }
    else{
        n->next = head;
        head = n;
    }
    }
    void insertAtPos(int pos,int val){
    int count  = pos;
    Node * n = new Node(val);
    Node * ptr = head;
    while(count > 1){
        ptr = ptr->next;
        count--;
    }
    n->next = ptr->next;
    ptr->next = n;
    n->pre = ptr;
    (n->next)->pre = n;
    }

};
int main(){
DNode d1;
d1.Append(11);
d1.Append(22);
d1.Append(44);
d1.prepend(00);
d1.insertAtPos(3,33);
d1.traverse();
}
