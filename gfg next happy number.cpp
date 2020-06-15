#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int n){
int s = 0;
while(n > 0){
    s += (n%10);
    n /= 10;
}
return s;
}
bool ithasone(int n){
int l = 0;
while(n>0){
    l = (n%10);
    n /= 10;
}
if(l == 1)return true;
else return false;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum = sumofdigits(n*n);
    bool yes = ithasone(sum);
    while(!yes){
        n++;
        sum = sumofdigits(n*n);
        yes = ithasone(sum);
    }
    cout<<sum<<endl;
}
}
