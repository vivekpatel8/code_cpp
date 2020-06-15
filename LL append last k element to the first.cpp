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
    next = NULL;
    data =d;
    }

};
void createLL(node *& head, node *& last){
    if(head == NULL){
        int num;
        cin>>num;
        head = new node(num);
        last = head;
    }
    else{
        int num;
        cin>>num;
        last->next = new node(num);
        last  = last->next;
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
int a = a, b =k;


while(k--){
    fast = fast->next;
}
while(fast->next != NULL){
    fast = fast->next;
    slow = slow->next;
}
return slow;


}
int main(){
node * head = NULL;
node * last = NULL;
node * c = NULL;
node * newH = NULL;
int n, k;
cin>>n;
for(int i = 0;i<n;i++)
    createLL(head, last);
cin>>k;
k = k % n;
if(k ==n || k == 0){
traverse(head);
}
else{
c = findK(head, k);
newH = c->next;
c->next = NULL;
last->next = head;
traverse(newH);
}
}

