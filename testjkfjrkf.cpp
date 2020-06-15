#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	public :
	node * left;
	node * right;
	int d;
	node(){
		left = NULL;
		right = NULL;
	}
	node(int da){
		d  = da;

		left = NULL;
		right = NULL;

	}
};
node * createTree(int * inorder, int * pre, int s, int e, unordered_map <int, int> mp){
static int i = 0;
if(s>e)return NULL;
int c = pre[i];
int index = mp[c];
node * root = new node(inorder[index]);
if(s == e)return root;
i++;
root->left = createTree(inorder, pre, s, index - 1, mp);
root->right = createTree(inorder, pre, index + 1, e, mp);
return root;
}
void preorder(node * root){
	if(root == NULL)return;
	cout<<root->d<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main() {
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	int inorder[n];
	int pre[n];
	unordered_map <int, int> mp;
	for(int i = 0;i<n;i++){
		cin>>inorder[i];
		mp[inorder[i]] = i;
	}
	for(int i = 0;i<n;i++){
		cin>>pre[i];
	}
    for(int i = 0;i<n;i++){
		mp[inorder[i]] = i;
	}
    node * root = NULL;
	root = createTree(inorder, pre, 0, n-1, mp);
	preorder(root);
}
	return 0;
}
