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
/*node * head = NULL;
void f(){
head = NULL;
}
node * helper(node * root, int data){
if(root == NULL)return new node(data);
if(data <= root->d){
    root->left = helper(root->left, data);
}
else if(data > root->d){
    root->right = helper(root->right, data);
}
return root;
}

void createTree(int * arr, int s, int e){
if(s>e)return ;
int mid = (s+e)/2;
    head = helper(head, arr[mid]);
    createTree( arr, s, mid-1);
    createTree( arr, mid+1, e);
}*/
node * createTree(int * arr, int s, int e){
if(s>e){
    return NULL;
}
int mid = (s+e)/2;
node * root = new node(arr[mid]);
root->left = createTree(arr, s, mid-1);
root->right = createTree(arr, mid + 1, e);
return root;
}
void preorder(node * root){
if(root == NULL)return;
cout<<root->d<<" ";
preorder(root->left);
preorder(root->right);
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    node * head = createTree( arr, 0, n-1);
    preorder(head);
    cout<<endl;
}
}
