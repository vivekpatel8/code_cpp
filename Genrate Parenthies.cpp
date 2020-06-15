#include<bits/stdc++.h>
using namespace std;
bool countONP(string s, int n){
if(s.length() == n*2)
return true;
else
return false;
}
void printParentheses(int opening, int closing, int n, string s){
    if(opening == closing){
        if(countONP(s,n))
        cout<<s<<endl;
    }
    if(opening>closing)
        return;
    if(closing > 0)
        printParentheses(opening, closing-1,n, s+")");
    if(opening > 0)
        printParentheses(opening-1, closing,n, s+"(");
}
int main(){
int n;
cin>>n;
printParentheses(n,n,n,"");
}
