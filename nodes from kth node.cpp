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

node * builtprein(int * pre, int * in, int s, int e){
static int i = 0;
if(s>e)return NULL;
int index;
for(int j = s ; j <= e ; j++){
    if(pre[i] == in[j]){
        index = j;
        break;
    }
}
i++;
node * root = new node(in[index]);
root->left = builtprein(pre, in, s, index-1);
root->right = builtprein(pre, in, index+1, e);
return root;
}

void tdown(node * root, int k){
if(root == NULL)return;
if(k == 0){
    cout<<root->d<<" ";
}
tdown(root->left, k-1);
tdown(root->right, k-1);
}
int printfromk(node * root, int k, int num){
if(root == NULL){
        return 0;
}
if(root->d == num){
    tdown(root, k);
    return 1;
}
else{
    int L = printfromk(root->left , k, num);
    int R = printfromk(root->right , k, num);
    if(L != 1){

            tdown(root, L - k);

        return L + 1;
    }
    if(R != 1){

            tdown(root, R - k);

        return R + 1;
    }
}
}
/*
4
60 65 50 70
50 65 60 70
2
60 1
65 2

             60
          /      \
       65         70
     /
  50
*/
int main(){
int n;
cin>>n;
int pre[n];
int in[n];
for(int i = 0;i<n;i++){
    cin>>pre[i];
}
for(int i = 0;i<n;i++){
    cin>>in[i];
}
node * root = builtprein(pre, in, 0, n-1);
int t;
cin>>t;
while(t--){
    int key, k;
    cin>>key>>k;
    printfromk(root, k, key);
    cout<<endl;
}
}
