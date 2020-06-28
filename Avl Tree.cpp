#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node * left;
    node * right;
    int data;
    int height;
    node(int d){
    data = d;
    height = 1;
    left = NULL;
    right = NULL;
    }
};

int height(node * root){
if(root == NULL)return 0;

return max(height(root->left), height(root->right)) + 1;
}
node * rotate_right(node * c){
node * b , * t3;

b = c->left;
t3 = b->right;

b->right = c;
c->left = t3;

c->height = height(c);
b->height = height(b);

return b;
}

node * rotate_left(node * c){
node * b, * t2;

b = c->right;
t2 = b->left;

b->left = c;
c->right = t2;

c->height = height(c);
b->height = height(b);
return b;
}
int bf1(node * root){ // balancing factor

if(root == NULL)return 0;
return height(root->left) - height(root->right);

}
node * insert(node * root, int item){
if(root == NULL)return new node(item);

if(item < root->data){
    root->left = insert(root->left, item);
}
else if(item > root->data){
    root->right = insert(root->right, item);
}
root->height = height(root);
int bf = bf1(root);
//LL case
if(bf > 1 && item < root->left->data){
    return rotate_right(root);
}

//RR case
if(bf < -1 && item > root->right->data){
    return rotate_left(root);
}

//LR case
if(bf > 1 && item > root->left->data){
// rotate b to left
root->left = rotate_left(root->left);
return rotate_right(root);

}

//RL case
if(bf < -1 && item < root->right->data ){

    root->right = rotate_right(root->right);
    return rotate_left(root);
}
return root;
}

void display(node * root){
if(root == NULL)return;
display(root->left);
cout<<root->data<<" "<<bf1(root)<<" "<<endl;
display(root->right);
}


int main(){
node * root = NULL;
root = insert(root, 5);
root = insert(root, 2);
root = insert(root, 3);
root = insert(root, 1);
root = insert(root, 6);
display(root);
}
