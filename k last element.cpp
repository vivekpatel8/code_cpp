#include<iostream>
using namespace std;
class node{
public:
    node * next;
    int data;
    node(){
    next = NULL;
    }
    node(int d){
    data = d;
    next = NULL;
    }
};
void createLL(node *& first, node *& last, int num){
    if(first == NULL){
        first = new node(num);
        last = first;
    }
    else{
        last->next = new node(num);
        last = last->next;
    }
}
void traverse(node * head){
node * temp = head;
if(head == NULL){

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
node * findK(node * head, int k){
node * slow = head;
node * fast = head;
while(k--){
    fast = fast->next;
}
while(fast != NULL){
    fast = fast->next;
    slow = slow->next;
}
return slow;
}
int main(){
int k;

node * s = NULL;
node * e = NULL;
int num;
cin>>num;
while(num != -1){

    createLL(s, e, num);
        cin>>num;
}
cin>>k;
s = findK(s, k);
cout<<s->data;
}
