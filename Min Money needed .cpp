#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll minMoney(ll * val, ll n, ll w){
vector <ll> price;
vector <ll> weight;
ll size = 0;
for(ll i = 0;i<n;i++){
    if(val[i] != -1){
        price.push_back(val[i]);
        weight.push_back(i+1);
        size++;
    }
}
n = size;
ll dp[n+1][w + 1];
for(ll i = 0;i<=w;i++)dp[0][i] = INT_MAX;
for(ll i = 1;i<=n;i++)dp[i][0] = 0;

for(ll i = 1;i<=n;i++){
    for(ll j = 1;j<=w;j++){
        if(weight[i - 1] > j){
            dp[i][j] = dp[i-1][j];
        }
        else{
            dp[i][j] = min(dp[i-1][j], dp[i][j - weight[i-1]] + price[i - 1]);
        }
    }
}
return (dp[n][w] == INT_MAX)? -1 : dp[n][w];
}
ll minMoneyNeeded(ll * val, ll n, ll w){



}
int main(){
ll n, w;
cin>>n>>w;
ll val[n];

for(ll i = 0;i<n;i++)cin>>val[i];
cout<<minMoney(val, n, w);
}
/*
Cody went to the market to buy some oranges for his N friends. There he finds orange wrapped in packets, with the price of i^th packet as val[i]. Now he wants to buy exactly W kg oranges, so he wants you to tell him what minimum price he should pay to buy exactly W kg oranges. Weight of i^th packet is i kg. If price of i^th packet is -1 then this packet is not available for sale. The market has infinite supply of orange packets.

Input Format
First line of input contains two space separated llegers N and W, the number of friend he has and the amount of Oranges in kilograms which he should buy.

The second line contains W space separated llegers in which the i^th^ lleger specifies the price of a ‘i’kg apple packet. A value of -1 denotes that the corresponding packet is unavailable

Constralls
1 <= N,W,val[ ] <= 10^3

Output Format
Output a single lleger denoting the minimum price Code should pay to get exactly W kg oranges. Else prll -1 if it is not possible to fill the bag.

Sample Input
5 5
1 2 3 4 5
Sample Output
5
*/
