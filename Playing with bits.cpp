#include<iostream>
using namespace std;
int countBit(int n){ // __builtin_popcount();
    int c = 0;
while(n){
    if(n&1){
        c++;
    }
    n = n>>1;
}
return c;
}
int main(){
int T;
cin>>T;

while(T--){
    int n1, n2;
    cin>>n1>>n2;
    int total = 0;
    for(int i = n1;i<=n2;i++){
        total += countBit(i);
    }
    cout<<total<<endl;
}

}
