#include<iostream>
using namespace std;
int main(){
int n, m;
cin>>n;
int arrn[n];
for(int i = 0;i<n;i++)
    cin>>arrn[i];
cin>>m;
int arrm[m];
for(int i = 0;i<m;i++)
    cin>>arrm[i];
int res[1000];
res[0] = 0;
int res_arr_size = 1;
int pro = 1;
int carry = 0;
int numn,numm;
for(int i = 0;i<res_arr_size;i++){
    numn = n-1-i;
    numm = m-1-i;
    if(numm < 0 && numn < 0){
    pro = carry;
    res[i] = pro;
    break;
    }
    else if(numn < 0){
    pro = arrm[m-1-i] + carry;
    res[i] = pro % 10;
    if(pro == 0)
        carry = 0;
    else
    carry = pro / 10;
    res_arr_size++;
    }
    else if(numm < 0){
    pro = arrn[n-1-i]  + carry;
    res[i] = pro % 10;
        if(pro == 0)
        carry = 0;
    else
    carry = pro / 10;
    res_arr_size++;
    }

    else{
    pro = arrn[n-1-i] + arrm[m-1-i] + carry;
    res[i] = pro % 10;
        if(pro == 0)
        carry = 0;
    else
    carry = pro / 10;
    res_arr_size++;
    }
}

for(int i =res_arr_size-2;i>=0;i--){
    cout<<res[i]<<", ";
}
cout<<"END";
}
