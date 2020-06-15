#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class car{
int model;
string name;

public :
    car(){

    }
    car(car &c){
    model = c.model;
    name = c.name;
    }
    void getCar(int model, string name){
    this->model = model;
    this->name = name;
    }
    void print(){
        cout<<model<<endl;
        cout<<name<<endl;
    }

};

int main(){
car c;
c.getCar(5, "audi");
car d(c);
c.print();
d.print();
}
