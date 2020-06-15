#include<iostream>
using namespace std;

class node{
public:
    node * left;
    node * right;
    int d;
    node(int data){
    left = NULL;
    right = NULL;
    d = data;
    }
};

node * builtbst(node * root, int data){
if(root == NULL)return new node(data);

if(data <= root->d){
    root->left = builtbst(root->left, data);
    return  root;
}
else if(data >= root->d){
    root->right = builtbst(root->right, data);
    return root;
}

}

node * deleteNode(node * root, int key){
if(root == NULL)return NULL;
if(root->d == key){
    if(root->left == NULL && root->right == NULL){
        delete root;
        return NULL;
    }
    else if(root->left != NULL && root->right == NULL){
        node * temp = root->left;
        delete root;
        return temp;
    }
    else if(root->left == NULL && root->right != NULL){
        node * temp = root->right;
        delete root;
        return temp;
    }
    else{
        node * temp = root;
        temp = temp->right;
        while(temp->left != NULL){
            temp = temp->left;
        }
        root->d = temp->d;
        //root-> right = deleteNode(root->right, temp->d);
        delete temp;
        return root;
    }
}
else if(key < root->d){
    root->left = deleteNode(root->left, key);
    return root;
}
else if(key > root->d){
    root->right = deleteNode(root->right, key);
    return root;
}

}
void pre(node * root){
if(root == NULL)return;
cout<<root->d<<" ";
pre(root->left);
pre(root->right);
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    node * root = NULL;
    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        root = builtbst(root, num);
    }
    int m;
    cin>>m;
    for(int i = 0;i<m;i++){
        int val;
        cin>>val;
        root = deleteNode(root, val);
    }
    pre(root);
}
}
