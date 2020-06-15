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

node * levelWiseInput(){
int num;
cin>>num;
node * root = new node(num);
queue <node*> q;
q.push(root);
while(!q.empty()){
node * f = q.front();
if(f == NULL){
q.pop();
}
else{
if(f->left == NULL){
    cin>>num;
    node * NN = NULL;
    if(num != -1)NN = new node(num);
    f->left = NN;
    q.push(NN);
}
if(f->right == NULL){
    cin>>num;
    node * NN = NULL;
    if(num != -1)NN = new node(num);
    f->right = NN;
    q.push(NN);
}
q.pop();
}
}
return root;
}

void vecticalprint(node * root , map<int, vector<int>> &m, int d){
if(root == NULL)return;
m[d].push_back(root->d);
vecticalprint(root->left, m, d-1);
vecticalprint(root->right, m, d+1);
}
int main(){
node * root = levelWiseInput();
map<int, vector<int>> m;
vecticalprint(root, m, 0);
for(auto it: m){
    cout<<it.first<<" ";
    auto x = it.second;
    for(auto y : x){
        cout<<y<<" ";
    }
    cout<<endl;
}
}
