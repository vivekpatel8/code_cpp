#include<iostream>
#include<cstring>
using namespace std;
void removeDublicate(char a[]){
int n = strlen(a);
int prev = 0;
for(int i=1;i<n;i++){
    if(a[prev]!=a[i]){
        prev++;
        a[prev] = a[i];
    }
}
a[prev+1] = '\0';
cout<<a<<endl;
}
int main(){
char a[10];
cin.getline(a,10);
removeDublicate(a);
}
