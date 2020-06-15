#include<iostream>
using namespace std;

string moveXend(string str ,int n, int i, string ans1, string ans2){
if(i == n){
return ans1+ans2;
}
if(str[i] != 'x'){

return moveXend(str, n, i+1, ans1+str[i], ans2);
}
else{
return moveXend(str, n, i+1, ans1, ans2+str[i]);
}
}

int main(){
    string str;
    cin>>str;
    int len = str.length();
    cout<<moveXend(str, len, 0, "", "");
}
