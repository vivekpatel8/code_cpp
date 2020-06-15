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

node * createTree(string s){
if(s == "true"){
    int num;
    cin>>num;
    node * root = new node(num);
    string l;
    cin>>l;
    if(l == "true"){
        root->left = createTree(l);
    }
    string r;
    cin>>r;
    if(r == "true"){
        root->right = createTree(r);
    }
    return root;
}
return NULL;
}

int height(node * root){
if(root == NULL)return 0;
int h1 = height(root->left);
int h2 = height(root->right);
return 1 + max(h1 ,h2);
}
void printlevel_L2R(node * root, int lev){
if(root == NULL)return;
if(lev == 1){
    cout<<root->d<<" ";
    return;
}
printlevel_L2R(root->left, lev-1);
printlevel_L2R(root->right, lev-1);
}
void printlevel_R2L(node * root, int lev){
if(root == NULL)return;
if(lev == 1){
    cout<<root->d<<" ";
    return;
}
printlevel_L2R(root->right, lev-1);
printlevel_L2R(root->left, lev-1);
}
void printZikZak(node * root, int h){
for(int i = 1;i<=h;i++){
    if(i&1){
    printlevel_L2R(root, i);
    }
    else{
        printlevel_R2L(root, i);
    }
}
}

int main(){
node * root = createTree("true");
int h = height(root);
printZikZak(root, h);
}
