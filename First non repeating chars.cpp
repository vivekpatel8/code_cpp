#include<bits/stdc++.h>
using namespace std;


void printFirstNonRepeatingChars(){
char ch;
unordered_map <char, int> um;
queue <char> qu;
cin>>ch;
while(ch != '.'){
    qu.push(ch);
    um[ch]++;
    while(!qu.empty()){
        if(um[qu.front()] > 1){
            qu.pop();// pops from front
        }
        else{
            cout<<qu.front()<<" ";
            break;
        }
    }
    if(qu.empty())
        cout<<"-1 ";
    cin>>ch;
}
}
int main(){
printFirstNonRepeatingChars();
}
