#include<iostream>
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

node * builtprein(int * pre, int * in, int s, int e){
static int i = 0;
if(s>e)return NULL;
int index;
for(int j = s ; j <= e ; j++){
    if(pre[i] == in[j]){
        index = j;
        break;
    }
}
i++;
node * root = new node(in[index]);
root->left = builtprein(pre, in, s, index-1);
root->right = builtprein(pre, in, index+1, e);
return root;
}
bool isbst(node * root, int minval = INT_MIN, int maxval = INT_MAX){
if(root == NULL)return true;
if(root->d >= minval && root->d <= maxval && (isbst(root->left,minval, root->d) && isbst(root->right, root->d, maxval))){
    return true;
}
else{
    return false;
}
}
int sizeofbst(node * root){
if(root == NULL)return 0;
return 1 + max(sizeofbst(root->left), sizeofbst(root->right));
}
int lsubtree(node * root){
if(isbst(root))
    return sizeofbst(root);
else
    return max(lsubtree(root->left), lsubtree(root->right));
}
int main(){
int n;
cin>>n;
int N[n];
int M[n];
for(int i = 0;i<n;i++){
    cin>>N[i];
}
for(int i = 0;i<n;i++){
    cin>>M[i];
}
node * root = builtprein(N, M, 0, n-1);
cout<<lsubtree(root);
}
