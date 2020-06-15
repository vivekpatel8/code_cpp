#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node * left;
    node * right;
    int d;
    int order;
    node(int data, int ord){
    d = data;
    order = ord;
    left = NULL;
    right = NULL;
    }
};

node * levelInput(node * root){
int num;
cin>>num;
if(root == NULL){
        root = new node(num, 0);
}
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
        node * n = NULL;
        if(num != -1){
            n = new node(num, f->order - 1);
        }
        f->left = n;
        q.push(n);
    }
    if(f->right == NULL){
        cin>>num;
        node * n = NULL;
        if(num != -1)n = new node(num, f->order + 1);
        f->right = n;
        q.push(n);
    }
    q.pop();}
}
return root;
}
unordered_map <int, multiset<int>> ans;
int min_key = INT_MAX;

int max_key = INT_MIN;

void inorder(node * root){

if(root == NULL)return;

inorder(root->left);

int order = root->order;

min_key = min(order, min_key);

max_key = max(order, max_key);

int data = root->d;

ans[order].insert(data);

inorder(root->right);

}

int main(){
int n; // level
cin>>n;
node * root =  NULL;
root = levelInput(root);
inorder(root);
for(int i = min_key; i <= max_key ; i++){
    for(auto x : ans[i]){
        cout<<x<<" ";
    }
    cout<<endl;
}

}

/*
You will be given a Binary Tree. Your task is to print the binary tree in Vertical Fashion. The image below describes how we define a vertical traversal of a tree.

Input Format
You will be given an Integer N denoting the number of levels in the corresponding tree. On the next line you will be given (2^N)-1 integers denoting the level order input for the tree. If at any level any node is absent then that will denoted by -1 and every integer other than -1 shows the presence of a node at that level.

Constraints
1 <= N <= 10^5

Output Format
Print all nodes of a given column in the same line.

Image

Sample Input
4
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 8 -1 9 -1 -1 -1 -1
Sample Output
4
2
1 5 6
3 8
7
9
Explanation
Refer to the image.
We are to simply print the traversal of each vertical level from left to right.
*/
