#include<bits/stdc++.h>
using namespace std;

void _2digitPermutaion(char in[], char out[],int i, int j , int n){
if(in[i] == '\0'){
    out[j] = '\0';
    cout<<out<<endl;
    return;
}
out[j] = in[i];
_2digitPermutaion(in, out, i+1, j+1, n);
_2digitPermutaion(in, out, i+1, j, n);
}

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
char in[100];
cin>>in;
char out[100];
_2digitPermutaion(in, out, 0, 0, n);
}
}
