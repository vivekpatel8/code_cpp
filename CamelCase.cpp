#include<iostream>
#include<cstring>

using namespace std;
int main(){
char a[1000];
cin>>a;
int len = strlen(a);

    cout<<a[0];

for(int i = 1;i<len;i++){
if(isupper(a[i])){
    cout<<endl<<a[i];
}
else{
    cout<<a[i];
}
}
}
