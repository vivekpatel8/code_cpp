#include<iostream>
using namespace std;

class comp{
    int a, b;
public:
    comp(){};
    comp(int c, int d){
    a = c;
    b =d;
    }
    void setAB(int c, int d){
    a = c;
    b = d;
    }
    void print(){
    cout<<a<<" "<<b;
    }

};
istream & operator>>(istream &is, comp &c){
    int a, b;
    cin>>a>>b;
    c.setAB(a, b);
    return is;
}

ostream & operator<<(ostream &is, comp &c){
    c.print();
    return is;
}

int main(){
comp d(1, 2);
comp d2;
cin>>d>>d2;
cout<<d<<d2;
}
