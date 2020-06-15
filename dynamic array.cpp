#include<iostream>
using namespace std;

class X{
int * p;
static int count1 ;
public:
void createArray(int val){
 p = new int;
 p[count1] = val;
 count1++;
}
void printval(){
    count1 = 0;
for(int i =0;i<count1;i++)
    cout<<p[i];
}
};
int main(){
X x1;
x1.createArray(45);
x1.createArray(46);
x1.printval();
}
