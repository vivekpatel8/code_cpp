#include<bits/stdc++.h>
using namespace std;



int main(){
double a, b,c ;
cin>>a>>b>>c;
double sqr = (pow(b,2)-(4*a*c));
sqr = sqrt(sqr);
double root1 = (sqr -b)/(2*a);
double root2 = (-1*(b+sqr))/(2*a);
if(isnan(root1)){
    cout<<"Imaginary"<<endl;
}
else if(root1 == root2){
    cout<<"Real and Equal"<<endl;
    cout<<root1<<" "<<root2<<endl;
}
else{
    if(root1<root2){
        cout<<"Real and Distinct"<<endl;
        cout<<root1<<" "<<root2<<endl;
    }
    else{
        cout<<"Real and Distinct"<<endl;
        cout<<root2<<" "<<root1<<endl;
    }
}
}
