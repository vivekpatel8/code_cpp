#include<iostream>
using namespace std;
int countDivisors(int n){
int ans = 1;
int cnt = 1;
for(int i = 2;i*i <= n;i++){
    if(n%i == 0){
        cnt = 0;
        while(n%i == 0){
            n/= i;
            cnt++;
        }
        ans *= (cnt+1);

    }
}
if(n != 1){
    ans = ans * 2;
}
return ans;
}
int main(){
int n;
cin>>n;
cout<<countDivisors(n);
}
