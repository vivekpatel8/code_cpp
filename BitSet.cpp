#include<iostream>
#include<cstring>
using namespace std;
/*
bool IsOdd(int num){
    return (num & 1);
}

int findingIthno(int n, int i){
    int mask  = (1<<i);
    return (n & mask);
}
void settingIbit(int n, int i){
int mask = (1<<i);
n = n | mask;
cout<<n;
}
void clearThBit(int n, int i){
int mask = ~(1<<i);
n = n & mask;
cout<<n;
}
void clearKbitsFromEnd(int num, int k){
int mask = (1<<(k+1));
 num = num & mask;
cout<<num;
}
int clearItoJ(int num, int j, int i){

int a = (1<<i)-1;
int b = (~0)<<j+1;

a = a | b;
int ans  = a & num;
return ans;

}
void replaceBitsWm(int n, int m, int j, int i){

int n_ = clearItoJ(n,j,i);
m = m<<i;

int ans = n_ | m;
cout<<ans;
}
int CounBits(int n){
    int c = 0;
while(n){
    n = (n & (n-1));
    c++;
}
return c;
}
int decimalToBinary(int n){
int ans = 0, pow = 1;
while(n){
int lastbit = (n & 1);
n = n>>1;
ans  += lastbit * pow;
pow  *= 10;
}
return ans;
}
void check2UniqueNo(int n){

int ans = 0, arr[10000];
for(int i = 0;i<n;i++){
    cin>>arr[i];
    ans = ans ^ arr[i];
}

int lastbit , ans1 = ans, pos = 0,x = 0, y = 0;
while((ans1&1) != 1){
    ans1 = ans1 >> 1;
    pos++;
}
lastbit = (1<<pos);
for(int i = 0 ; i < n ; i++){
    if((arr[i] & lastbit)>0){
        x = x ^ arr[i];
    }
}

y = ans ^ x;

cout<<min(x,y)<<" "<<max(x,y)<<endl;
}*/
void checkUniqueNo3repating(int n){
int arr[64] = {0};
int  j;
for(int i = 0;i<n;i++){
    int num;
    cin>>num;
    j = 0;
    while(num>0){
        int lastbit = (num & 1);
        arr[j] += lastbit;
        num = num>>1;
    j++;
    }
}
int ans = 0, p = 1;
for(int i = 0 ; i<64 ; i++){
    arr[i] %= 3;
    ans += (arr[i] * p);
    p = (p << 1);
}
cout<<ans;
}
int powers(int a, int b){
int ans = 1;
while(b>0){
    int last_bit = (b & 1);
    if(last_bit){
    ans = ans *  a;
    }

    a = a * a;
    b = b>>1;
}

return ans;
}
void filterChar(char a[] , int n){
int j = 0;
while(n > 0){
    int lastbit = (n & 1);

    if(lastbit > 0){
      cout<<a[j];
    }
    j++;
    n = n>>1;
}
cout<<", ";
}

void printSubset(){
char a[] = {'a', 'b', 'c', '\0'};
int len = strlen(a);
for(int i = 1; i < (len<<1)+2 ; i++){
    filterChar(a,i);
}

}

int main(){
printSubset();
}
