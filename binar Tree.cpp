#include<iostream>
#include<queue>
using namespace std;
class node{
public :
    int d;
    node * left;
    node * right;
    node(){
    left = NULL;
    right = NULL;
    }
    node(int data){
    d = data;
    left = NULL;
    right = NULL;
    }
};
node * createTree(){
int data;
cin>>data;
if(data == -1){
    return NULL;
}
node * root = new node(data);
root->left = createTree();
root->right = createTree();
return root;
}
void traverseTree(node * root){ // preorder root left right
if(root == NULL)return;
int data  = root->d;
cout<<data<<" ";
traverseTree(root->left);
traverseTree(root->right);
}
void inorder(node * root){ // left root right
if(root == NULL)return;
inorder(root->left);
int data = root->d;
cout<<data<<" ";
inorder(root->right);
}
void postorder(node * root){ // left right root
if(root == NULL)return;
postorder(root->left);
postorder(root->right);
cout<<root->d<<" ";
}
// level wise print O(n^2)
// first finding the height of the tree
 int height(node * root){
 if(root == NULL)return 0;
 int ls = height(root->left); // finds the height of left sub tree
 int rs = height(root->right); //                     right sub tree
 return max(ls ,rs ) +1;
 }
// for printing the nodes at kth level
void printKthLevel(node * root, int k){
if(root == NULL)return;
if(k == 1){
    cout<<root->d<<" ";
}
printKthLevel(root->left, k-1);
printKthLevel(root->right, k-1);
}
//printing the all the level using for loop
void printAllLevel(node * root, int height){
for(int i = 1 ;i<= height;i++){
    printKthLevel(root, i);
    cout<<endl;
}
}
// now level wise traversal using BFS O(n)
void printBFS(node * root){
queue <node*> q;
q.push(root);
q.push(NULL);
while(!q.empty()){
    node * f = q.front();
    if(f == NULL){
        cout<<endl;
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<f->d<<" ";
        q.pop();
    if(f->left){
        q.push(f->left);
    }
    if(f->right){
        q.push(f->right);
    }}
}
return;}
// counting no. of nodes
int countNodes(node * root){
if(root == NULL)return 0;
return 1 + countNodes(root->left) + countNodes(root->right);
}
int sumofNodes(node * root){
if(root == NULL)return 0;
int s = root->d;
return s + sumofNodes(root->left) + sumofNodes(root->right);
}
// diameter of the tree O(n)
int diameter(node * root){
if(root == NULL)return 0;
int h1 =  height(root->left);
int h2 =  height(root->right);
int op1 = h1 + h2;
int op2 = diameter(root->left);
int op3 = diameter(root->right);
return max(op1, max(op2, op3));
}
// fast diameter O(n)
// it uses post order traversal
class Pair{
public :
    int d;
    int h;
};
Pair fastDaimeter(node * root){
Pair p;
if(root == NULL){
    p.h = p.d = 0;
    return p;
}
Pair p1 = fastDaimeter(root->left);
Pair p2 = fastDaimeter(root->right);

p.h = 1 + max(p1.h, p2.h);
p.d = max(p1.h+p2.h, max(p1.d, p2.d));
return p;
}
// replace all elements as the sum of there children
int relsums(node * root){
if(root == NULL)return 0;
if(root->left == NULL && root->right == NULL){
    return root->d;
}

int leftsum = relsums(root->left);
int rightsum = relsums(root->right);

int temp = root->d;
root->d = (leftsum + rightsum);
return temp + root->d;
}
class HBPair{
public:
    int height;
    bool balenced;
};
// to check height balanced tree
HBPair Hbalence(node * root){
HBPair p;
if(root == NULL){
p.height = 0;
p.balenced = true;
return p;
}
HBPair left = Hbalence(root->left);
HBPair right = Hbalence(root->right);
if(abs(left.height - right.height) <= 1 && left.balenced && right.balenced){
    p.balenced = true;
}
else{
    p.balenced = false;
}
return p;
}
// function to make height balanced binary tree
node * makeHeightBalTree(int * arr, int s, int e){
if(s>e){
    return NULL;
}
int mid = (s+e)/2;
node * root = new node(arr[mid]);
root->left = makeHeightBalTree(arr, s, mid-1);
root->right = makeHeightBalTree(arr, mid+1, e);
return root;
}
// pre + in to post order
node * preInToPost(int * in, int * pre, int s, int e){
static int i = 0;
if(s>e)return NULL;
int data = pre[i];
node * root = new node(data);
int index = -1;
for(int j = s;j<=e;j++){
    if(pre[i] == in[j]){
        index = j;
        break;
    }
}
i++;
root->left = preInToPost(in, pre, s, index-1);
root->right = preInToPost(in, pre, index+1, e);
return root;
}
void helper(node * root, int level, int & maxsize){
if(root == NULL)return;
if(maxsize < level){
    cout<<root->d<<" ";
    maxsize = level;
}
helper(root->right, level + 1, maxsize);
helper(root->left, level + 1, maxsize);
return;
}

void rightView(node * root){
int maxsize = 0;
helper(root, 1, maxsize);
}
// to find the nodes at a distance k from the target node
void downthenode(node * target, int k){
if(target == NULL)return;
if(k == 0){
    cout<<target->d<<" ";
}
downthenode(target->left, k- 1);
downthenode(target->right, k- 1);
}
int recurse(node * root, int target, int k){
if(root == NULL)return -1;
if(root->d == target){
    downthenode(root, k);
    return 0;
}
int dl = recurse(root->left, target, k);
if(dl != -1){
    if(dl + 1 == k){
        cout<<root->d<<" ";
    }
    else{
        downthenode(root->right, k - dl - 2);
    }
    return 1 + dl;
}
int dr = recurse(root->right, target, k);
if(dr != -1){
    if(dr + 1 == k){
    cout<<root->d<<" ";}
    else{
    downthenode(root->left, k - dr - 2);
}
return 1 +dr;
}

return -1;
}
/*// finding ancestor of node
vector <int> ans;
void getAncestor(node * root, int k){
if(root == NULL || root->d == k)return;
ans.push_back(root->d);
getAncestor(root->left, k);
getAncestor(root->right, k);
}*/
//finding LSA
class custom{
public:
    bool hasKey1;
    bool hasKey2;
    node * nnode;
};
custom * helperLSA(node * root, int p, int q){
if(root == NULL)return NULL;
custom * leftans = helperLSA(root->left ,p ,q );
if(leftans != NULL && leftans->nnode != NULL){// ans is in left sub tree
    return leftans;
}
custom  *rightans = helperLSA(root->right ,p ,q);
if(rightans != NULL && rightans->nnode != NULL){ // ans is in right sub tree
    return rightans;
}
custom * result = new custom();
if(leftans != NULL && rightans != NULL){ // ans is in root
    result->hasKey1 = true;
    result->hasKey2 = true;
    result->nnode = root;
    return result;
}else if(root->d == p){
result->hasKey1 = true;
result->hasKey2 = (leftans)?leftans->hasKey2 : false || (rightans) ? rightans->hasKey2 : false;
return result;
}else if(root->d == q){
result->hasKey2 == true;
result->hasKey1 = (rightans)?rightans->hasKey1 : false || (leftans)? leftans->hasKey1 : false;
return result;
}else if(leftans){
return leftans;
}else if(rightans){
return rightans;
}
return NULL;
}
node * LSA(node * root, int p, int q){
    custom * a = helperLSA(root, p, q);
    if(a != NULL)return a->nnode;
}
// maximum sum path in b tree
int gmax = INT_MIN;
int maxSumPath(node * root){

if(root == NULL)return 0;
int ls = maxSumPath(root->left);
int rs = maxSumPath(root->right);
int case1 = root->d;
int case2 = ls + root->d;
int case3 = rs + root->d;
int case4 = ls + rs + root->d;
gmax = max(case1, max(case2, max(case3, max(case4, gmax))));
return max(ls, max(rs, 0)) + root->d;
}
// find the distance between to nodes
int DrootTonode(node * root, int n){//give the distance from root to node
if(root == NULL)return -1;
int dis = -1 ;
if(root->d == n || (dis = DrootTonode(root->left, n)) >= 0 || (dis = DrootTonode(root->right, n)) >= 0){
    return dis + 1;
}
return dis;
}

//binary tree to dlinklist

node * head;
void b2ll(node * root ){
if(root == NULL)return;
static node * prev = NULL;
b2ll(root->left);

if(prev == NULL){
    head = root;
}
else{
    root->left = prev;
    prev->right = root;
}
prev = root;
b2ll(root->right);
}

int main(){

node * root = new node(1);
root->left = new node(2);
root->left->right = new node(10);
root->left->left = new node(3);
root->right = new node(4);
root->right->right = new node(5);

b2ll(root);
while(head != NULL){
    cout<<head->d<<" ";
    head = head->right;
}
}
