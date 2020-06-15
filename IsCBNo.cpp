#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkCB(int num){

  int cbnum[] = {2,3,5,7,11,13,17,19,23,29};
  for(int i = 0;i<10;i++){
    if(num == cbnum[i]){
        return true;
        break;
    }
    else if(num%cbnum[i] == 0 ){
        return false;
        break;
    }
    else if( num == 1 ){
        return false;
        break;
    }
  }
}
int main(){
int n;
cin>>n;
char num1[n];
cin>>num1;
int num = stoi(num1);
int power = 10,cb =0;
int n1 = num;
while(n1){
    if(num%10 == 0 || num%10 == 4 || num%10 == 6 || num%10 == 8){
        num = num/10;
    }
    else if(checkCB( num%power)){
     cb++;
     num = num/power;
     power = 10;
    }
    else{
        power *= 10;
    }
   n1 = n1/10;
}
cout<<cb;
}
