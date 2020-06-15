#include<bits/stdc++.h>
using namespace std;

int dp[250][250][250];

int lcs(string a, string b, string c, int lena , int lenb, int lenc){

for(int i = 1;i<=lena;i++){
    for(int j = 1;j<=lenb;j++){
        for(int k = 1;k<=lenc;k++){
            if(a[i-1] == b[j-1] && b[j-1] == c[k-1]){
                dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
            }
            else{
                dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
            }
        }
    }
}
return dp[lena][lenb][lenc];
}

int main(){
string a, b, c;
cin>>a>>b>>c;
memset(dp, 0, sizeof(dp));
int lena = a.length();
int lenb = b.length();
int lenc = c.length();
cout<<lcs(a, b, c, lena, lenb, lenc);
}
/*
Given 3 strings ,the task is to find the longest common sub-sequence in all three given sequences.

Input Format
First line contains first string . Second line contains second string. Third line contains the third string.

Constraints
The length of all strings is |s|< 200

Output Format
Output an integer denoting the length of longest common subsequence of above three strings.

Sample Input
GHQWNV
SJNSDGH
CPGMAH
Sample Output
2
Explanation
"GH" is the longest common subsequence
*/
