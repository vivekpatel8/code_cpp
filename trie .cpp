#include<bits/stdc++.h>
using namespace std;

class node{
public:
    char data;
    unordered_map<char, node*> children; // this will act as next
    bool terminal;

node(char ch){
data = ch;
terminal = false;
}

};

class trie{
node * root;
int cnt;

public:
    trie(){
    root = new node('\0');
    cnt = 0;
    }
void insert(string str){
node * temp = root;
for(int i = 0;str[i] != '\0';i++){

    if(temp->children.count(str[i]) > 0 ){
        temp = temp->children[str[i]]; // this will return the next node
    }
    else{
        node * n = new node(str[i]); // just like adding new node to a link list
        temp->children[str[i]] = n;
        temp = n;
    }

}
temp->terminal = true;
}

bool find(string str){
node * temp = root;
for(int i =0;str[i] != '\0';i++){
    if(temp->children.count(str[i]) == 0){
        return false;
    }
    else{
        temp = temp->children[str[i]];
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
