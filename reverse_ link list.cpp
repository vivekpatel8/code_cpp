#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class node{
public:
    node * next;
    int data;
    node(){
    next = NULL;
    }
    node(int data){
    this->data = data;
    next = NULL;
    }
};
void createLL(node *& head, int num){
    node * temp = head;
    node * n = new node(num);
if(head == NULL){
   head = n;
}
else if(head->next == NULL){
   temp->next = n;
}
else{
while(temp->next != NULL){
   temp = temp->next;
}
temp->next = n;
}
}
void traverse(node * head){
    node * temp = head;
    if(temp == NULL){
        cout<<"NULL"<<" ";
    }
    else if(temp->next == NULL){
        cout<<temp->data<<" ";
    }
    else{
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}
node  * revLL(node * head){
if(head == NULL || head->next == NULL){
     return head;
}
node * smallHead = revLL(head->next);
node * c = head;
c->next->next = c;
c->next = NULL;
return smallHead;
}
void joinLL(node *& head1, node *& head2){
node * temp = head1;
if(head1 == NULL){
    head1 = head2;
    return;
}
else if(head2 == NULL){
    return;
}
else{
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head2;
}
}
int main(){
node * head1 = NULL;
node * head2 = NULL;
int n, k;
cin>>n;
cin>>k;
for(int i = 1;i<=n;i+=k){
for(int j = 1;j<=k;j++){
    int num;
    cin>>num;
    createLL(head2, num);
}
    head2 = revLL(head2);
    joinLL(head1, head2);
    head2 = NULL;

}
joinLL(head1, head2);
traverse(head1);
}
