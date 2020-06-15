#include<bits/stdc++.h>
using namespace std;
bool cr(){
    string str;
    cin>>str;
    stack <char> s;
    int len = str.length();
    bool redd  = false;
    for(auto ch : str){
            if(ch == ')'){
                char top = s.top();
                if(top == '(')
                    return true;
                s.pop();
                redd = true;
                while(top != '('){
                if(top == '*' || top == '-' || top == '+' || top == '/')
                                redd = false;
                top = s.top();
                s.pop();
                }
                if(redd == true)
                          return true;
            }
            else{
                s.push(ch);
            }
    }
    return false;
}
int main(){
int t;
cin>>t;
while(t--){
if(cr())
    cout<<"Duplicates"<<endl;
else
    cout<<"Not Duplicate"<<endl;
}
}
