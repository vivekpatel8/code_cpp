#include<iostream>
using namespace std;
void print(char *in,char *out, int i, int j, int & c ){
if(in[i] == '\0'){
    out[j] = '\0';
    c++;
    cout<<out<<" ";
    return;
}

print(in, out, i+1, j, c);
out[j] = in[i];
print(in, out, i+1, j+1 , c );


}
int main(){
char in[100];
char out[100];
cin>>in;
int c = 0;
print(in,out, 0, 0, c);
cout<<c;
}
