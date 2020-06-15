#include<bits/stdc++.h>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printKeyString(char *in, char * out, int i, int j){
if(in[i] == '\0'){
    out[j] = '\0';
    cout<<out<<endl;
    return;
}
int d = in[i] - '0';
for(int k = 0 ;table[d][k] != '\0'; k++){
    out[j] =  table[d][k];
    printKeyString(in, out, i+1, j+1);
}
}

int main(){
char in[100];
cin>>in;
char out[100];
printKeyString(in, out, 0, 0);
}
