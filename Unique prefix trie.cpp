#include<bits/stdc++.h>
using namespace std;
class node{
public:
    char data;
    int cntr;
    unordered_map <char, node*> children;
    bool terminal;
    node(){}
    node(char ch){
    cntr = 0;
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
        char ch = str[i];
        if(temp->children.count(ch) > 0){
            temp->cntr++;
            temp = temp->children[ch];

        }
        else{
            temp->cntr++;
            node * N = new node(ch);
            temp->children[ch] = N;
            temp = N;
        }
    }
    temp->terminal = true;
}

string f(string str){
node * temp = root;
node * prev ;
string res = "";
for(int i =0;str[i] != '\0';i++){
    char ch = str[i];
    if(temp->cntr == 1)return res;
    if(temp->children.count(ch) == 0){
        return "-1";
    }
    else{

    res += ch;

    prev = temp;
    temp = temp->children[ch];
    }
}
if(temp->cntr > 1)return "-1";
return res;
}

};

int main(){
string arr[] = {"zebra", "zebras", "dog", "dove"};
trie t;
for(int i = 0;i<4;i++){
    t.insert(arr[i]);
}

for(int i = 0;i<4;i++){
    cout<<t.f(arr[i])<<" ";
}

}
