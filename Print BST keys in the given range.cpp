#include<iostream>
using namespace std;

class node{
public:
    node * left;
    node * right;
    int d;
    node(int data){
    d = data;
    left = NULL;
    right = NULL;
    }
};

node * bst(node * head, int data){
if(head == NULL)return new node(data);
if(data <= head->d){
    head->left = bst(head->left, data);
}
else if(data > head->d){
    head->right = bst(head->right, data);
}
return head;
}
void preorder(node * root){
if(root == NULL)return;
cout<<root->d<<" ";
preorder(root->left);
preorder(root->right);
}
void inorder(node * root, int k1, int k2){
if(root == NULL)return;
inorder(root->left, k1, k2);
if(root->d >= k1 && root->d <= k2)cout<<root->d<<" ";
inorder(root->right, k1, k2);
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int k1, k2;
    cin>>k1>>k2;
    node * head = NULL;
    for(int i = 0;i<n;i++){
        head = bst(head, arr[i]);
    }
    cout<<"# Preorder : ";
    preorder(head);
    cout<<endl;
    cout<<"# Nodes within range are : ";
    inorder(head, k1, k2);
    cout<<endl;
}
}
