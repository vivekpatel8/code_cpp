#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node *left;
    node *right;
    int d, child;
    node(int data, int c){
    d = data;
    child = c;
    left = NULL;
    right = NULL;
    }
};

node * createTree(node * root){
int num;
cin>>num;
int child;
cin>>child;
root = new node(num, child);
if(child == 0){
    return root;
}
else if(child == 1){
    root->left = createTree(root->left);
    return root;
}
else{
    root->left = createTree(root->left);
    root->right = createTree(root->right);
    return root;
}
}
static int sum = 0;
void sumAtK(node * root, int k){
if(root == NULL)return;
if(k == 0){
     sum += root->d;
     return;
}
 sumAtK(root->left, k-1);
 sumAtK(root->right, k-1);
}
int main(){
node * root = NULL;
root = createTree(root);
int k;
cin>>k;

sumAtK(root, k);
cout<<sum<<" ";
}
