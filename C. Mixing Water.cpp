#include<bits/stdc++.h>
using namespace std;

int f(double h, double c, double t){
double temp = h;
int i = 1;
while(temp != t){
    if(temp > t){
        temp = round((temp - c)/i);
        if(temp == t)return i;
        i++;
    }
    else{
        temp = round((temp + h)/i);
        if(temp == t)return i;
        i++;
    }
}
return i ;
}
int main(){
int T;
cin>>T;
while(T--){
    double h, c, t;
    cin>>h>>c>>t;
    cout<<f(h, c, t)<<endl;

}
}

