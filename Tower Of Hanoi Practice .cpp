#include<iostream>
using namespace std;
void TowerOfHenoi(int n , char src, char dest, char helper ){
if(n == 0){
    return;
}
TowerOfHenoi(n-1, src, helper, dest);
cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;
TowerOfHenoi(n-1, helper, dest, src);
}
int main(){
int n;
cin>>n;
char a= 'A';
char b = 'B';
char c = 'C';
TowerOfHenoi(n, a, b, c);
}
