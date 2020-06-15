#include<iostream>
#include<cstring>
#include<string>
using namespace std;

template<typename T>

class Node{
public:
string key;
T value;
Node<T> * next;
Node(string k, T val){
    key = k;
    value = val;
    next = NULL;
}
~Node(){
if(next!=NULL){
    delete next;
}
}
};
template<typename T>
class HashTable{
Node<T> ** table;
int table_size;
int current_size;
public :

    HashTable(int ts = 7){
    table_size = ts;
    current_size = 0;
    table = new Node<T>*[table_size];
    for(int i = 0;i<table_size;i++){
        table[i] = NULL;
    }
    }
    int hashFn(string key){
    int idx = 0;
    int p = 1;
    for(int i = 0;i<key.length();i++){
     idx += (key[i]*p) % table_size;
     idx = idx % table_size;
     p = (p * 27) % table_size;
    }
    return idx;
    }

    void insert(string key, T value){
    int idx = hashFn(key);
    Node<T> * n = new Node<T>(key, value);
    n->next = table[idx];
    table[idx] = n;
    }
    void print(){
    for(int i = 0;i<table_size;i++){
    Node<T> * temp =  table[i];
    while(temp != NULL){
        cout<<temp->key<<" "<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
    }
    }
};

int main(){
HashTable <int> menu;
menu.insert("pizza", 82);
menu.insert("nuts", 20);
menu.print();
}
