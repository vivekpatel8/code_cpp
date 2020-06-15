#include<bits/stdc++.h>
using namespace std;

bool stringMatch(string str, string patt){
int len_str = str.length();
int len_patt = patt.length();

bool dp[len_str + 1][len_patt + 1] = {false};

for(int i = 0;i<=len_patt;i++)dp[0][i] = false;
for(int i = 0;i<=len_str;i++)dp[i][0] = false;
if(patt[0] == '*' && len_str > 0){
    dp[0][1] = true;
}
dp[0][0] = true;
for(int i = 0;patt[i] == '*';i++){
	dp[i][0] = true;
}
for(int i = 1;i<=len_str;i++){
    for(int j = 1;j<=len_patt;j++){
        if(str[i-1] == patt[j-1]){
            dp[i][j] = dp[i-1][j-1];
        }
	else if(patt[j - 1] == '?' ){
			dp[i][j] = dp[i-1][j-1];
		}
        else if(patt[j-1] == '*'){
            dp[i][j] = true;//dp[i-1][j] || dp[i][j-1];
        }
		else{
			dp[i][j] = false;
		}
    }
}
return dp[len_str][len_patt];
}


int main(){
string str, patt;
cin>>str>>patt;
bool isFirst = true;
string newPatt = "";
for(int i = 0;i<patt.length();i++){
    if(patt[i] == '*'){
        if(isFirst){
            newPatt += patt[i];
            isFirst = false;
        }
    }
    else{
        isFirst = true;
        newPatt += patt[i];
    }
}

cout<<stringMatch(str, newPatt);
return 0;
}
