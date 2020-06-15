#include<iostream>
#include<queue>
using namespace std;
class node{
public :
    int d;
    node * left;
    node * right;
    node(int data){
    d = data;
    left = NULL;
    right = NULL;
    }
};
node * createTree(){
int data;
cin>>data;
if(data == -1){
    return NULL;
}
node * root = new node(data);
root->left = createTree();
root->right = createTree();
return root;
}
void BFS(node * root){
queue <node*> q;
if(root == NULL)return;
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
    if(f->left){
        q.push(f->left);
    }
    if(f->right){
        q.push(f->right);
    }
    q.pop();
}
}
}
node * preInToPost(int * in, int * pre, int s, int e){
static int i = 0;
if(s>e){
    return NULL;
}
node * root = new node(pre[i]);
int index = -1;
for(int j = s;j<=e;j++){
    if(pre[i] == in[j]){
            index = j;
    break;
    }
}
i++;
root->left = preInToPost(in, pre, s, index-1);
root->right = preInToPost(in, pre, index+1, e);
return root;
}


int main(){
int in[] = {4, 2, 5, 1, 3, 6};
int pre[] = {1, 2, 4, 5, 3, 6};
node * root = preInToPost(in, pre, 0,5);
BFS(root);
}
