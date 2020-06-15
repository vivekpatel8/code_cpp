#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node * left;//0
    node * right;//1
    node(){
    left = NULL;
    right = NULL;
    }
};

void create(node * root, int n){
node * temp = root;
for(int i= 31 ; i>=0;i--){
    int bit = (n >> i) & 1;
    if(bit == 0){
        if(temp->left == NULL){
            temp->left = new node();
        }
            temp = temp->left;
    }
    else{
        if(temp->right == NULL){
            temp->right = new node();
        }
            temp = temp->right;
    }
}
}

int xorwithpair(node * root, int n){
node * temp = root;
int current_xor = 0;
for(int i = 31;i>=0;i--){
    int bit = (n>>i)&1;
    if(bit == 0){
        if(temp->right != NULL){
            current_xor += (int)pow(2, i);
            temp = temp->right;
        }
        else{
            temp = temp->left;
        }
    }
    else{
        if(temp->left != NULL){
            current_xor += (int)pow(2, i);
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
}
return current_xor;
}

int main(){
int n;
cin>>n;
int arr[n];
node * root = new node();
for(int i = 0;i<n;i++){
    cin>>arr[i];
    create(root, arr[i]);
}
int max_xor = INT_MIN;
for(int i = 0;i<n;i++){
    max_xor = max(max_xor, xorwithpair(root, arr[i]));
}
cout<<max_xor<<endl;
}
