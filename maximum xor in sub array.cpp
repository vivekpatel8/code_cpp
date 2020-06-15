#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node * left ; //0
    node * right ; //1
    node(){
    left = NULL;
    right = NULL;
    }

};


void createTrie(node * root, int n){ // cumulative xor tree

node * temp = root;
for(int i = 31;i>=0;i--){
    int bit = (n>>i)&1;
    if(bit == 0){
        if(temp->left != NULL){
            temp = temp->left;
        }
        else{
            node * n = new node();
            temp->left = n;
            temp = n;
        }
    }
    else{
        if(temp->right != NULL){
            temp = temp->right;
        }
        else{
            node * n = new node();
            temp->right = n;
            temp = n;
        }
    }
}

}

int max_xor_f(node * root, int n){
node * temp = root;
int xor1 = 0;
for(int i = 31;i>=0;i--){
    int bit = (n>>i) & 1;
    if(bit == 0){
        if(temp->right != NULL){
           xor1 += ((int)pow(2, i));
           temp = temp->right;
        }
        else{
            temp = temp->left;
        }
    }
    else{
        if(temp->left != NULL){
            xor1 += ((int)pow(2, i));
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
}
return xor1;
}

int main(){
int len;
cin>>len;
int arr[len];
for(int i = 0;i<len;i++)cin>>arr[i];
node * root = new node();
int xor1 = arr[0];
int max_xor = xor1;
createTrie(root, xor1);
for(int i = 1;i<len;i++){
    xor1 = xor1 ^ arr[i];
    createTrie(root, xor1);
    max_xor = max(max_xor, xor1);
}

for(int i = 0;i<len;i++){
    max_xor = max(max_xor, max_xor_f(root, arr[i]));
}

cout<<max_xor<<endl;
}
