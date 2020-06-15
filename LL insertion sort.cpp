#include<iostream>
using namespace std;

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

int main(){
node * s = NULL;
node * e = NULL;
int n;
cin>>n;
int n1 =n;
    createLL(s, e, n1)
}
