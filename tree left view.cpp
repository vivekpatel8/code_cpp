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

node * levelinput(){
int num;
cin>>num;
node * N = new node(num);
queue <node*>q;
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
        q.pop();
    }
}
return N;
}

void t(node * root, int level){
static int maxlevel = 0;
if(root == NULL)return;
if(maxlevel < level){
    cout<<root->d<<" ";
    maxlevel = level;
}
t(root->left, level+1);
t(root->right, level+1);
}
int main(){
node * root = levelinput();
t(root, 1);
}
