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
void t(node * root){
if(root == NULL)return;
cout<<root->d<<" ";
t(root->left);
t(root->right);
}
node * built(int * arr, int s, int e){
if(s>e)return NULL;
int mid = (s+e)/2;
node * root = new node(arr[mid]);
root->left = built(arr, s, mid-1);
root->right = built(arr, mid+1, e);
return root;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
for(int i = n-2;i>=0;i--){
    arr[i] += arr[i + 1];
}
node * root = built(arr, 0, n-1);
t(root);
}
