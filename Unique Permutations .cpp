#include<bits/stdc++.h>
using namespace std;
set <string> s;
void f(char *in, int i){
if(in[i] == '\0'){
    s.insert(in);
    return;
}
for(int j = 0;in[j] != '\0';j++){
    swap(in[j], in[i]);
    f(in, i+1);
    swap(in[j], in[i]);
}
}
int main(){

char in[100];
cin>>in;
//brute force is fast
/*for(int i = 0;in[i] != '\0';i++){
    for(int j = 0 ;in[j+1] != '\0';j++){
        swap(in[j], in[j+1]);
        s.insert(in);
    }
}*/
f(in, 0);
for(auto x : s){
    cout<<x<<endl;
}
}
