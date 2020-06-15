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


node * builtree(){
int num;
cin>>num;
node * N = new node(num);
queue <node*> q;
q.push(N);
while(!q.empty()){
    node * f = q.front();
    if(f == NULL){
        q.pop();
    }
    else{
    if(f->left == NULL){
        cin>>num;
        node * NN = NULL;
        if(num != -1)
        NN = new node(num);
        f->left = NN;
        q.push(NN);
    }
    if(f->right == NULL){
        cin>>num;
        node * NN = NULL;
        if(num != -1)
        NN = new node(num);
        f->right = NN;
        q.push(NN);
    }
    q.pop();}
}
return N;
}
void leftside(node * root){
if(root == NULL)return;
leftside(root->left);
cout<<root->d<<" ";
}
void rightside(node * root){
if(root == NULL)return;
cout<<root->d<<" ";
rightside(root->right);
}
int main(){
node * root = builtree();
leftside(root);
rightside(root->right);
}
