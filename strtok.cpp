#include<iostream>
#include<cstring>
using namespace std;
int main(){
char s1[100] = "i am";

char * ptr = strtok(s1," ");
cout<<ptr<<endl;

while(ptr!=NULL){
    ptr = strtok(NULL," ");
    cout<<ptr<<endl;
}
}
