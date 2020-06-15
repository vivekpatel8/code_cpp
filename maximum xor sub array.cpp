#include<bits/stdc++.h>
using namespace std;

class node{
public:
    node * left; // as 0
    node * right; // as 1
    node(){
    left = NULL;
    right = NULL;
    }
};
void insert(node * root, int n){
    node * temp = root;
    for(int i = 31;i>=0;i--){
        int bit = n & (1<<i);
        if(bit == 0){
            if(temp->left != NULL ){
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

int max_xor(node * root, int n){
node * temp = root;
int ans = 0;
for(int i = 31;i>=0;i--){
        int bit = n & (1<<i);
        if(bit == 0){
            if(temp->right != NULL){
                    ans += (int)pow(2, i);
                    temp = temp->right;
            }
            else{
                temp = temp->left;
            }
        }
        else{
            if(temp->left != NULL){
                temp = temp->left;
                ans+= (int)pow(2, i);
            }
            else{
                temp = temp->right;
            }
        }
}
return ans;
}

int main(){
int n;
cin>>n;
int arr[n];
node * root = new node();
int prev = 0;
int max_ans = INT_MIN;

for(int i = 0;i<n;i++){
    cin>>arr[i];
    prev = prev ^ arr[i];
    max_ans = max(max_ans, prev);
    insert(root, prev);
}

for(int i = 0;i<n;i++){
    max_ans = max(max_xor(root, arr[i]), max_ans);
}
cout<<max_ans;
}
