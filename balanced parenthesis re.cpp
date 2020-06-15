#include<bits/stdc++.h>
using namespace std;
bool checkIt(){
string str;
cin>>str;
int len = str.length();
stack <char> s;
int open = 0, close = 0, i = 0;
while(i<len){
       if(str[i] == '('){
            s.push('(');
          }
        else if(str[i] == '{'){
            s.push('{');
        }
        else if(str[i] == '['){
            s.push('[');
        }
        else if(str[i] == ')'){
            if(s.empty() || s.top() != '('){
                return false;
            }
            s.pop();
        }
        else if(str[i] == '}'){
            if(s.empty() || s.top() != '{'){
                return false;
            }
            s.pop();
        }
        else if(str[i] == ']'){
            if(s.empty() || s.top() != '['){
                return false;
            }
            s.pop();
        }
       i++;
}
return true;

}
int main(){
if(checkIt()){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}
