#include<bits/stdc++.h>
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

// making BST
node * insertBST(node * root, int val){
if(root == NULL){
    return new node(val);
}
if(val <= root->d){
    root->left = insertBST(root->left, val);
}
else{
    root->right = insertBST(root->right, val);
}
return root;
}
node * built(){
int val;
cin>>val;
node * root = NULL;
while(val != -1){
    root = insertBST(root, val);
    cin>>val;
}
return root;
}
void inorder(node * root){
if(root == NULL)return;
inorder(root->left);
cout<<root->d<<" ";
inorder(root->right);
}
void bfs(node * root){
queue <node*> q;
if(root == NULL)return ;
q.push(root);
q.push(NULL);
while(!q.empty()){
    node * f = q.front();
    if(f == NULL){
        cout<<endl;
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }
    }
            else{
            cout<<f->d<<" ";
            q.pop();
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
}
}
// for searching in bst
bool searchBST(node * root, int data){
if(root == nullptr)return false;

if(root->d == data)return true;

if(root->d <= data){
    return searchBST(root->left, data);
}
else{
    return searchBST(root->left, data);
}
}
node * deleteNode(node * root, int data){
if(root == NULL)return NULL;
if(root->d == data){
    if(root->left == NULL && root->right == NULL){
        delete root;
        return NULL;
    }
    else if(root->left != NULL && root->right == NULL){
        node * temp = root->left;
        delete root;
        return temp;
    }
    else if(root->right != NULL && root->left == NULL){
        node * temp = root->right;
        delete root;
        return temp;
    }
    else{
        node * replace = root->right;
        while(replace->left != NULL){
            replace = replace->left;
        }
        root->d = replace->d;
        root->right = deleteNode(root->right , replace->d);
        return root;
    }
}
else if(data < root->d){
    root->left = deleteNode(root->left, data);
    return root;
}
else{
    root->right = deleteNode(root->right, data);
    return root;
}
}
bool checkbst(node * root, int minV = INT_MIN, int maxV = INT_MAX){
if(root == NULL)return true;
if(root->d >= minV && root->d <= maxV && checkbst(root->left, minV, root->d) && checkbst(root->right, root->d, maxV)){
    return true;
}
else{
    return false;
}}
// bst to ll
class linklist{
public:
    node * head ;
    node * tail ;
};
linklist  bst2ll(node * root){
linklist  l1;
if(root == NULL){
    l1.head = NULL;
l1.tail = NULL;
return l1;
}
// single node
if(root->left == NULL && root->right == NULL){
    l1.head = root;
    l1.tail = root;
    return l1;
}
// right side null
if(root->left != NULL && root->right == NULL){
    linklist leftll = bst2ll(root->left);
    leftll.tail->right = root;
    l1.head = leftll.head;
    l1.tail = root;
    return l1;
}
// left side is null
if(root->right != NULL && root->left == NULL){
    linklist rightll = bst2ll(root->right);
    root->right = rightll.head;
    l1.head = root;
    l1.tail = rightll.tail;
    return l1;
}
// both size is not null
linklist  leftll = bst2ll(root->left);
linklist  rightll = bst2ll(root->right);
leftll.tail->right = root;
root->right = rightll.head;
l1.head = leftll.head;
l1.tail = rightll.tail;
return l1;
}

int main(){
node * root = built();
linklist l1 = bst2ll(root);
node * temp = l1.head;
while(temp != NULL){
    cout<<temp->d<<" ";
    temp = temp->right;
}
cout<<endl;
}
