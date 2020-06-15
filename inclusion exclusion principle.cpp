#include<bits/stdc++.h>
using namespace std;

int main(){
int n = 100;
int nums[] = {2, 3, 5};
int lenofNum = sizeof(nums)/sizeof(int);
int totalSets = (1<<lenofNum) - 1;
int ans = 0;
for(int i = 1 ;i<= totalSets; i++){
    int bitsc = __builtin_popcount(i);
    int nm = i;
    int mul = 1;
    int j = 0;
    while(nm  >= 1){

        if((nm & 1) == 1){
            mul *= nums[j];
        }
        nm = (nm>>1);
        j++;
    }
    if((bitsc % 2) == 0){
        ans -= (n/mul);
    }
    else{
        ans += (n/mul);
    }
}
cout<<ans;
}
