#include<iostream>
using namespace std;
int multi(int x , int res[] , int res_arr_size){
    int carry = 0;
    int pro;
    for(int i = 0;i<res_arr_size;i++){
        pro = res[i] * x + carry;
        res[i] = pro % 10;
        carry = pro / 10;
    }
    while(carry){
        res[res_arr_size] = carry % 10;
        carry = carry / 10;
        res_arr_size++;
    }
    return res_arr_size;
}
void fact(int n){
int res_arr_size = 1;
int res[5000];
res[0] = 1;
int i;
for(i = 2;i<=n;i++){
    res_arr_size = multi(i,res,res_arr_size);
}
for(i = res_arr_size - 1;i >=0 ; i--){
    cout<<res[i];
}
}
int main(){
int n ;
int T;
cin>>T;
while(T--){
cin>>n;
fact(n);
cout<<endl;
}
}
