#include <iostream>
using namespace std;

int sum(int n){

while(n>1){
 return n * sum(n-1);
}

}
int main(){
cout<<sum(5);
}
