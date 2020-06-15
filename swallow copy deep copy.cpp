#include<iostream>
#include<cstring>
using namespace std;
class car{
public :
    int model;
    char * name;
    car(){
    name = NULL;
    }
    car(car & c){
    this->model = c.model;
    int len = strlen(c.name);
    this->name = new char[len+1];
    strcpy(this->name,c.name);
    }
    void setData(int model, char * n){
    this->model = model;
    int len = strlen(n);
    name = new char[len+1];
    strcpy(name, n);
    }
    void print(){
    cout<<model<<endl;
    cout<<name<<endl;
    }
};


int main(){
car c;
c.setData(1, "BMW");
car d(c);
d.name[0] = 'A';
d.model =2;
c.print();
d.print();
}
