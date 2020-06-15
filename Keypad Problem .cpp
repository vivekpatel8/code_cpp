#include<iostream>
using namespace std;
char keyPad[][10] = {" ", " ", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void keypadStringPrint(char *in, char *out, int i, int j){
if(in[i] == '\0'){
    out[j] = '\0';
    cout<<out<<", ";
    return;
}
int digit = in[i] - '0';
if(digit == 0 || digit == 1){
    keypadStringPrint(in, out, i+1, j);
}
for(int k =0;keyPad[digit][k] != '\0';k++){
    out[j] = keyPad[digit][k];
    keypadStringPrint(in, out, i+1, j+1);
}
}

int main(){
char in[100];
char out[100];
cin>>in;
keypadStringPrint(in, out, 0, 0);
}
