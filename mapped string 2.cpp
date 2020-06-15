#include<iostream>
using namespace std;
void mappedString(char *in, char *out, int i, int j){
if(in[i] == '\0'){
    out[j] = '\0';
    cout<<out<<endl;
    return ;
}

int digit = (in[i] - '0');
out[j] = (digit + 'A' - 1);
mappedString(in, out, i+1, j+1);
if(in[i+1] != '\0'){
    digit = ((in[i] - '0')*10) + (in[i+1] - '0');
    if(digit<=26){
        out[j] = (digit + 'A' -1);
        mappedString(in, out, i+2, j+1);
    }
}

}

int main(){

char in[100];
cin>>in;
char out[100];
mappedString(in, out, 0, 0);

}

