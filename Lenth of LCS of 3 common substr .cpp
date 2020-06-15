#include<bits/stdc++.h>
using namespace std;

int dp[250][250][250];

int lcs(string a, string b, string c, int lena , int lenb, int lenc){
if(lena == -1 || lenb == -1 || lenc == -1)return 0;

if(dp[lena][lenb][lenc] != 0)return dp[lena][lenb][lenc];

if(a[lena-1] == b[lenb-1] && b[lenb-1] == c[lenc-1]){
    return dp[lena][lenb][lenc] = 1 + lcs(a, b, c, lena-1, lenb-1, lenc - 1);
}
else{
    return dp[lena][lenb][lenc] = max(lcs(a, b, c, lena-1, lenb, lenc), max(lcs(a, b, c, lena, lenb-1, lenc), lcs(a, b, c, lena, lenb, lenc - 1)));
}

}

int main(){
string a, b, c;
cin>>a>>b>>c;
memset(dp, -1, sizeof(dp));
int lena = a.length();
int lenb = b.length();
int lenc = c.length();
cout<<lcs(a, b, c, lena, lenb, lenc);
}
