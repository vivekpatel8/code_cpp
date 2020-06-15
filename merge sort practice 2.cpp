#include<iostream>
using namespace std;
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
node * mergeLL(node * a, node * b){
if(a == NULL){
    return b;
}
if( b== NULL){
    return a;
}
node * c = NULL;
if(a->data < b->data){
    c = a;
    c->next = mergeLL(a->next, b);
}
else{
    c = b;
    c->next = mergeLL(a, b->next);
}
return c;
}
int main(){
int T;
cin>>T;
while(T--){
    node * a = NULL;
    node * b = NULL;
    int n1, n2;
    cin>>n1;
    for(int i = 0;i<n1;i++){
            int num;
    cin>>num;
    createLL(a , num);}
    cin>>n2;
        for(int i = 0;i<n2;i++){
            int num;
    cin>>num;
    createLL(b , num);}
    a = mergeLL(a , b);
    traverse(a);
    cout<<endl;
}
}
