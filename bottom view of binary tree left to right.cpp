#include<iostream>
#include<queue>
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

node * createTree(node * root, queue <node*> &q){
int num;
cin>>num;
node * N = NULL;
if(num != -1)N = new node(num);
if(root == NULL)return N;
q.push(N);
while(!q.empty()){
cin>>num;
N = NULL;
if(num != -1)N = new node(num);
if(N != NULL)q.push(N);
node * f = q.front();
if(f->left == NULL){
    f->left = N;
}
else if(f->right == NULL){
    f->right = N;
    q.pop();
}
if(N != NULL){
    q.push(N);
}}
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
void btm(node * root){
if(root == NULL)return;
btm(root->left);
cout<<root->d<<" ";
}
int main(){
node * root = NULL;
queue<node*> q;
root = createTree(root, q);
bfs(root);
}
