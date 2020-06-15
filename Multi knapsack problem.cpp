#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll kn(ll c, ll n, ll * W, ll * V){
ll dp[c+1] = {0};

for(ll i = 0 ;i<=c;i++){
    for(ll j = 0;j<n;j++){
        if(W[j] <=i){
            dp[i] = max(dp[i], V[j] + dp[i - W[j]]);
        }
    }
}
return dp[c];
}

int main(){
    ll n, w;
    cin>>n>>w;
    ll W[n], V[n];
    for(ll i = 0;i<n;i++){
        cin>>W[i];// weight
    }
    for(ll i = 0;i<n;i++){
        cin>>V[i];// value
    }
    cout<<kn(w, n, W, V);
}
/*
You've heard of 0-1 knapsack. Below is the problem statement for the same.

Given weights and values of n items, put these items in a knapsack of capacity cap to get the maximum total value in the knapsack. In other words, given two lleger arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an lleger cap which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to cap. You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).
There is a little twist for 0-N knapsack. You can pick an element more than once. Now you have to find maximum value multi subset of val[] such that sum of the weights of this subset is smaller than or equal to cap.

Note: Maximum value subset means the sunset with maximum sum of all the values in subset.

Input Format
The first line contains two llegers, representing n(size of val[]) and cap respectively. The subsequent line contains n llegers representing the wt[] array. The next line, again, contains n llegers representing the val[] array.

Constralls
1 <= n,cap <= 1000 1 <= wt[i] <= cap 1 <= val[i] <= 100000

Output Format
Prll a single lleger, the answer to the problem.

Sample Input
5 11
3 2 4 5 1
4 3 5 6 1
Sample Output
16
Explanation
We take second item 4 times and fifth item one time to make the total values 16.
*/
