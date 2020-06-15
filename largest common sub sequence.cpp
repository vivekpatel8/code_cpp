#include<bits/stdc++.h>
using namespace std;

int largestCommonSubSequence(string a, string b){

int lena = a.length();
int lenb = b.length();

int dp[100][100];

for(int i = 0;i<=lena;i++)dp[i][0] = 0;

for(int i = 0;i<=lenb;i++)dp[0][i] = 0;

for(int i = 1;i<=lena;i++){
    for(int j = 1;j<=lenb;j++){
        int q = 0;
        if(a[i-1] == b[j-1]){
        q = dp[i-1][j-1] + 1;
        }
        else{
        q = max(dp[i][j -1], dp[i-1][j]);
        }
        dp[i][j] = q;
    }
}
return dp[lena][lenb];
}

int main(){
string a, b;
cin>>a>>b;

cout<<largestCommonSubSequence(a, b);

}
