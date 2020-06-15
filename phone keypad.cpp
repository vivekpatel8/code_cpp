#include<iostream>
using namespace std;
char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void keyPadPrint(char in[], char out[], int i , int j){
if(in[i] == '\0'){
    out[j] = '\0';
    cout<<out<<endl;
    return;
}
int num = in[i] - '0';
for(int k =0;keypad[num][k] != '\0';k++){
    out[j] = keypad[num][k];
    keyPadPrint(in, out, i+1, j+1);
}

}
int main(){
char in[100];
char out[100];
cin>>in;
keyPadPrint(in, out, 0,0);
}
