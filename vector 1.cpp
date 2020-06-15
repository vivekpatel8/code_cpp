#include<iostream>
using namespace std;

class vector{
public :
    int * arr;
    int * old;
    int s, e;
    vector(){
    arr= new int[1];
    s = 1;
    e = 0;
    }

    void push_back(int n){
        if(e<s){
            arr[e] = n;
            e++;
        }
        else{
            old = arr;
            s *= 2;
            arr = new int[s];
            for(int i = 0;i<s/2;i++)
                arr[i] = old[i];
            arr[e] = n;
            e++;
        }
    }
    int operator [](int indx){
    return arr[indx];
    }
    void print(){
        for(int i= 0;i<e;i++)
        cout<<arr[i];
    }

};

int main(){

vector v1;
v1.push_back(1);
v1.push_back(1);
v1.push_back(1);
v1.print();
}
