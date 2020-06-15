#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max1 00

char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
void print(string str, string searchIn[]){
for(int i =0;i<11;i++){
        int n = searchIn[i].find(str);
    if(n>=0){
        cout<<searchIn[i]<<endl;
    }
}
}

void fun(char *in,char *out, int i, int j){
if(in[i] == '\0'){
    out[j] = '\0';
    print(out, searchIn);
    return;
}
int num = in[i] - '0';
for(int k = 0;keypad[num][k] != '\0';k++){
    out[j] = keypad[num][k];
    fun(in, out, i+1, j+1);
}
}

int main(){
char in[100];
char out[100];
cin>>in;
fun(in, out, 0, 0);
}
