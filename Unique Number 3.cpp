#include<iostream>
using namespace std;

int main(){
int n, arr[64] = {0};
cin>>n;
for(int i = 0;i<n;i++){
    int num;
    cin>>num;
    int j = 0;
    while(num>0){
        int lastbit =  (num&1);
        arr[j] += lastbit;
        num = num>>1;
        j++;
    }
}
int ans = 0;
for(int i = 0;i<64;i++){
    arr[i] %= 3;
    if(arr[i]>0){
    int mask = (1<<i);
    ans = ans + mask;
    }
}
cout<<ans;


}






