#include<bits/stdc++.h>
using namespace std;

class node{
public:
    char data;
    unordered_map <char, node*> children;
    bool terminal;
    node(char ch){
    data = ch;
    terminal = false;
    }

};

class trie{

node * root;
int cnt ;
public:
    trie(){
    root = new node('\0');
    }
void insert(string str){
node * temp = root;
for(int i = 0;str[i] != '\0';i++){
    char ch = str[i];
    if(temp->children.count(ch)){
        temp = temp->children[ch];
    }
    else{
        node * n = new node(ch);
        temp->children[ch] = n;
        temp = n;
    }
}
temp->terminal = true;
}

bool find(string str){
    node * temp = root;
    for(int i = 0 ; str[i] != '\0';i++){
            char ch = str[i];
        if(temp->children.count(ch) == 0){
            return false;
        }
        else{
            temp = temp->children[ch];
        }
    }
return temp->terminal;
}

};

int main(){
trie T;
T.insert("abc");
T.insert("apple");
T.insert("ball");
cout<<boolalpha<<T.find("apple");
}
