#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[18];
    cin>>a;
    int len = strlen(a);
    for(int i = 0;i<len;i++){
        if(i ==0 && a[i]== '9'){

        }
        else {
        if(a[i]== '5'){
            a[i] = '4';
        }
        else if(a[i] == '6'){
            a[i] = '3';
        }
        else if(a[i] == '7'){
            a[i] = '2';
        }
        else if(a[i] == '8'){
            a[i] = '1';
        }
        else if(a[i] == '9'){
            a[i] = '0';
        }


        }
    }
    cout<<a;
}
