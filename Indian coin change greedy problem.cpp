#include<bits/stdc++.h>
using namespace std;

void coinNeeded(int * coins, int n, int money){
int ans = 0;
while(money > 0){
    int index = upper_bound(coins, coins+n, money) - 1 - coins;
    cout<<coins[index]<<" ";
    money = money - coins[index];
    ans++;
}
cout<<ans<<" ";
}

int main(){
int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
coinNeeded(coins, 10, 39999);
}
