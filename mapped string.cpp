#include<bits/stdc++.h>
using namespace std;
char letter[27] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J','K', 'L','M' , 'N', 'O', 'P', 'Q','R','S', 'T','U', 'V', 'W', 'X', 'Y', 'Z' };
int digit = 0;
string s ;
void f(char *in, char *out, int i, int j){
if(in[i] == '\0'){
    out[j] = '\0';
    cout<<out<<endl;
    return;
}
digit = (in[i] - '0');
s += digit+"";
int n  = stoi(s);
out[j] = letter[n];

f(in, out, i+1, j+1);
f(in, out, i+1, j);
}

int main(){
char in[100], out[100];
cin>>in;
f(in, out, 0, 0);
}
