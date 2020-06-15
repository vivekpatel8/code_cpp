#include<bits/stdc++.h>
using namespace std;
bool checkExp(){
stack <char> s1;
 int n;
cin>>n;
for(int i = 0;i<n;i++){
    char c;
    cin>>c;
    if(c == '('){
        s1.push('(');
       }
    else if(c == ')'){
        if(s1.empty() || s1.top()=='(')
        return false;
        s1.pop();

    }
}
if(s1.empty())
    return true;

}
int main(){

cout<<checkExp();
}
