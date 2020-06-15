#include<bits/stdc++.h>
using namespace std;

int dp[2005][2005][6] = {0};

int f(int * a, int * b, int n, int m , int k){
if (k == 0) return 0;
if(n == 0 || m == 0 )return 0;

/*int & ans = dp[n][m][k];

if(ans != 0)return ans;

ans = max(f(a, b, n-1, m, k), f(a, b, n, m-1, k));

if(a[n-1] == b[m-1]){
    ans = max(ans, 1 + f(a, b, n-1, m-1, k));
}
ans = max(ans, 1 + f(a, b, n-1, m-1, k-1));
return ans;*/
if(dp[n][m][k] != 0)return dp[n][m][k];

if(a[n-1] == b[m-1]){
    return dp[n][m][k] = max(f(a, b, n-1, m-1, k) + 1, max(f(a, b, n-1, m, k), f(a, b, n, m-1, k)));
}
else{
    return dp[n][m][k] = max(f(a, b, n-1, m-1, k -1) + 1, max(f(a, b, n-1, m, k), f(a, b, n, m-1, k)));
}
}

int main(){
    int n , m , k;
    cin>>n>>m>>k;
    int a[n], b[m];
    for(int i = 0;i<n;i++)cin>>a[i];
    for(int i = 0;i<m;i++)cin>>b[i];

    cout<<f(a, b, n, m, k);
return 0;
}
/*
Any programmer worth his salt would be familiar with the famous Longest Common Subsequence problem. Mancunian was asked to solve the same by an incompetent programmer. As expected, he solved it in a flash. To complicate matters, a twist was introduced in the problem.

In addition to the two sequences, an additional parameter k was introduced. A k-ordered LCS is defined to be the LCS of two sequences if you are allowed to change atmost k elements in the first sequence to any value you wish to. Can you help Mancunian solve this version of the classical problem?

Input Format
The first line contains three integers N, M and k, denoting the lengths of the first and second sequences and the value of the provided parameter respectively. The second line contains N integers denoting the elements of the first sequence. The third line contains M integers denoting the elements of the second sequence.

Constraints
1 <= N, M <= 2000 1 <= k <= 5 1 <= element in any sequence <= 109

Output Format
Print the answer in a new line.

Sample Input
5 5 1
1 2 3 4 5
5 3 1 4 2
Sample Output
3
*/
