#include<iostream>
using namespace std;

int main(){
int n, ans = 0;
int arr[10000];
cin>>n;
for(int i = 0;i<n;i++){
    cin>>arr[i];
    ans = ans ^ arr[i];
}

int temp = ans, pos = 0;
while((temp&1) != 1){
    pos++;
    temp = temp>>1;
}
int x= 0, y= 0;
int mask = (1<<pos);
for(int i =0;i<n;i++){
    if(arr[i]&mask){
        x = x^arr[i];
    }
}
y = ans ^ x;
cout<<min(x, y)<<" "<<max(x, y);
}
