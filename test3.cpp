#include<iostream>
using namespace std;

int main(){
    string str = "geeksforgeeks a computer science";
    string str1 = "gee";

    // Find first occurrence of "geeks"
    int found = str.find(str1);

    if(found >=0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}
