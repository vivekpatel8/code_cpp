#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class car{
public :
    string name;
    int x , y;
    car(){

    }
    car(string name, int x, int y){
    this->name = name;
    this->x = x;
    this->y = y;
    }
    string getName(){
    return name;
    }
    int getX(){
    return x;
    }
    int getY(){
    return y;
    }
};
bool comp(car c1, car c2){
string s1 = c1.getName();
string s2 = c2.getName();
int x1 = c1.getX();
int y1 = c1.getY();
int x2 = c2.getX();
int y2 = c2.getY();
    if(x1*x1+y1*y1 == x2*x2+y2*y2)
        return s1<s2;
    return x1*x1+y1*y1 < x2*x2+y2*y2;
}
int main(){

vector <car> v1;
int x, y;
string name;

for(int i = 0;i<5;i++){
    cin>>name;
    cin>>x>>y;
    car c1(name, x, y);
    v1.push_back(c1);
}
sort(v1.begin(),v1.end(),comp);
for(int i = 0;i<5;i++){
cout<<" Name: "<<v1[i].getName()<<" X: "<<v1[i].getX()<<" Y: "<<v1[i].getY()<<endl;
}

}
