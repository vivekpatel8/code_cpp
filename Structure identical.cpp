#include<iostream>
#include<bits/stdc++.h>
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
node * createTree(){
int num;
cin>>num;
node * root = new node(num);
string s;
cin>>s;
if(s == "true")
    root->left = createTree();
else
    root->left = NULL;
cin>>s;
if(s == "true")
    root->right = createTree();
else
    root->right = NULL;
return root;
}
void bfs(node * root){
queue <node*> q;
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
        q.pop();
        cout<<f->d<<" ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}
}
bool checkpath(node * root1, node * root2){
if(root1 == NULL && root2 == NULL)return true;

if(root1 != NULL && root2 != NULL){
    return (checkpath(root1->left, root2->left) && checkpath(root1->right, root2->right));
}
return false;
}
int main(){
node * root1 = createTree();
node * root2 = createTree();
if(checkpath(root1, root2)){
    cout<<"true";
}
else{
    cout<<"false";
}
}
