#include<iostream>
using namespace std;
class node{
public:
    node * next;
    int data;
    node(int data){
    next = NULL;
    this->data = data;
    }
};

void insertNode(node *& head, int num){
node * n = new node(num);
node * temp = head;
n->next = head;
if(head!= NULL){
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
}
else{
    n->next = n;
}
head = n;
}
void traverseCLL(node * head){
if(head == NULL ){
        cout<<" no node "<<endl;
}
if(head == head->next){
    cout<<head->data<<endl;
}
node * temp = head;
while(temp->next != head){
    cout<<temp->data<<"->";
    temp = temp->next;
}
cout<<temp->data;
cout<<endl;
}
node * findNode(node *& head, int num){
node * temp = head;
if(head == NULL){
    cout<<"No node";
    return NULL;
}
else if(temp->data == num){
    return temp;
}
else{
    while(temp->next != head){
        if(temp->data == num){
            return temp;
        }
        temp =  temp->next;
    }
}
return NULL;
}
void deleteNode(node *& head, int num){
    node * del = findNode(head, num);
    if(head == NULL){
        cout<<"no node";
    }
    if(head == del){
        head = del->next;
    }

    node * temp =  head;
    while(temp->next != del){
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;
}

int main(){
node * head = NULL;
for(int i = 1;i<10;i++)
insertNode(head, i);
traverseCLL(head);
}
