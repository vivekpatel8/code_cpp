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

vector <int> v1;
while(n--){
    int q;
    cin>>q;
    if(q == 0){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    else{
        int l, r, x;
        cin>>l>>r>>x;
        node * root = new node();
        for(int i = l-1;i<r;i++){
            insert(root, v1[i]);
        }
        int ans = max_xor(root, x);
        ans = ans ^ x;
        cout<<ans<<endl;
    }
}
}
