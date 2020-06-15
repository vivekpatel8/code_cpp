#include<iostream>
using namespace std;
int f(int n){
if(n == 1 || n == 2){
    if(n == 1)
        return  2;
    else if(n == 2)
        return 3;
}

return f(n-1)+f(n-2);

}
int main(){
int t;
cin>>t;
int i = 1;
while(i<=t){
    int n;
    cin>>n;
    cout<<"#"<<i<<" : "<<f(n)<<endl;
    i++;
}

}
