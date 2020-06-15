#include<iostream>
using namespace std;
class node{
public:
int data;
node * next;
node(){
next = NULL;
}

node(int n){
data = n;
next = NULL;
}
};

void insertNodeAtHead(node * &head, int data){
node * n = new node(data);
n->next = head;
head = n;
}

void print(node * head){
while(head != NULL){
    cout<<head->data<<" ";
    head = head->next;
}
}
int LinkLength(node *head){
node * temp = head;
int len = 0;
while(temp!= NULL){
    len++;
    temp = temp->next;
}
return len;
}
void insertAtEnd(node *& head, int num){
node * temp = head;
node * n = new node(num);
while(temp->next != NULL){
temp = temp->next;
}
temp->next = n;
}
void insertAtMiddle(node *&head, int num, int index){
node * temp = head;
node * n = new node(num);
int cnt = 1;

if(temp == NULL){
    temp = n;
}
else{
    while(temp->next != NULL && cnt < index){
        temp = temp->next;
        cnt++;
    }
    n->next = temp->next;
    temp->next = n;
    return;
}
}
void deleteAtHead(node *& head){
node * temp = head;
if(head == NULL){
    cout<<"No Node exist";
}
else{
    head = head->next;
    delete temp;
}
}
void deleteAtEnd(node *& head){
node * temp = head;
if(temp == NULL){
    cout<<"No node exist";
}
else{
    while((temp->next)->next != NULL){
        temp = temp->next;
    }

    delete (temp->next);
    temp->next = NULL;
}
}
void deleteAtMiddle(int index, node *& head){
node * prev = NULL;
node *temp = head;
while(index > 1 && temp->next!= NULL){
    index--;
    prev = temp;
    temp = temp->next;
}
prev->next = temp->next;
delete temp;
}
bool searchRecursive(node * head, int n){
if(head == NULL){
    return false;
}
if(head->data == n)return true;

return searchRecursive(head->next, n);
}
void builtList(node *& head){
    node * temp = head;
    int num;
    cin>>num;
    node * n = new node(num);
    if(temp == NULL){
        head = n;
    }
    else{
        while(temp->next != NULL){
            temp =  temp->next;
        }
        temp->next = n;
    }
}
istream & operator >> (istream & is, node *& head){
    builtList(head);
    return is;
}
ostream & operator << (ostream & is, node * head){
    print(head);
    return is;
}
void reverseLink(node *& head){

node * C = head;
node * N;
node * P = NULL;
while(C != NULL){
    N = C->next;
    C->next = P;
    P = C;
    C = N;
}
head = P;

}

node * revereUsingRec(node * head){
if(head->next == NULL || head == NULL){
    return head;
}

node * smallhead = revereUsingRec(head->next);
node * c = head;
c->next->next = c;
c->next = NULL;
return smallhead;
}

node * findingMiddle(node * head){
node * slow = head;
node * fast = head->next;
while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
}
return slow;
}

node * KthLastElement(node * head, int k){
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
node * mergeSortedLinkList(node * head1, node * head2){
node * temp1;

if(head1->data < head2->data)
    temp1 = head1;
else
    temp1 = head2;
while(head1 != NULL && head2 != NULL){

    node * N1;
    node * temp;
    if(head1->data < head2->data){
        N1 = head1->next;
        temp = head2->next;
        head2->next = N1;
        head1->next = head2;
        head2 = temp;
        head1 = head1->next;
    }
    else{
        N1 = head2->next;
        temp = head1->next;
        head1->next = N1;
        head2->next = head2;
        head1 = temp;
        head2 = head2->next;
    }
}
return temp1;
}
node * mergeSortedLinkListUsingRec(node *a, node *b){
if(a == NULL){
    return b;
}
if(b == NULL){
    return a;
}
node * c;
if(a->data < b->data){
    c = a;
    c->next = mergeSortedLinkListUsingRec(a->next, b);
}
else{
    c = b;
    c->next = mergeSortedLinkListUsingRec(a, b->next);
}
return c;
}
node * mergeSort(node *& head){
if(head == NULL || head->next == NULL){
    return head;
}
node * mid = findingMiddle(head);
mid->next = NULL;
node * a = mergeSort(head);
node * b = mergeSort(mid);
node * c = mergeSortedLinkListUsingRec(a, b);
return c;
}
int main(){

node * head1 = NULL;
node * head2 = NULL;
for(int i = 0;i<7;i++){
    cin>>head1;
}

head1 = mergeSort(head1);
cout<<head1;

}
