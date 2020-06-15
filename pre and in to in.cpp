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

node * prein(int * pre, int *in, int s, int e){
static int i = 0;
if(s>e)return NULL;
int index;
for(int j = s;j<=e;j++){
    if(pre[i] == in[j]){
        index = j;
        break;
    }
}
i++;
node * root = new node(in[index]);
root->left = prein(pre, in, s, index-1);
root->right = prein(pre, in, index+1, e);
return root;
}
void t(node * root){
if(root == NULL)return;

if(root != NULL){
    if(root->left != NULL && root->right != NULL)
    cout<<root->left->d<<" => "<<root->d<<" <= "<<root->right->d<<endl;
    else if(root->left == NULL && root->right != NULL)
    cout<<"END => "<<root->d<<" <= "<<root->right->d<<endl;
    else if(root->left != NULL && root->right == NULL)
    cout<<root->left->d<<" => "<<root->d<<" <= END"<<endl;
    else
    cout<<"END => "<<root->d<<" <= END"<<endl;
}
t(root->left);
t(root->right);
}
int main(){
int m;
cin>>m;
int M[m];
for(int i = 0;i<m;i++){
    cin>>M[i];
}
int n;
cin>>n;
int N[n];
for(int i = 0 ;i<n;i++){
    cin>>N[i];
}
node * root = prein(M, N, 0, n-1);
t(root);
}
