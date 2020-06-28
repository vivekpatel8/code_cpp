#include<bits/stdc++.h>
using namespace std;

class temp{
public:
    int a, b, len;
    temp(int x, int y, int z){
    a = x;
    b = y;
    len = z;
    }
};

temp expandAroundCenter(string s, int i, int j, int n){
int x = i, y = j;
while(x >= 0 && y < n && s[x] == s[y]){
    x--;
    y++;
}

x++;
y--;
int z = y - x + 1;
temp t1(x, y, z);
return t1;
}

int main(){
string str;
cin>>str;
int n = str.length();
int maxlen = INT_MIN, start, en;
for(int i = 0;i<n;i++){
    temp l1 = expandAroundCenter(str, i, i, n);
    temp l2 = expandAroundCenter(str, i, i+1, n);
    if(l1.len > maxlen){
        maxlen = l1.len;
        start = l1.a;
        en = l1.b;
    }
    if(l2.len > maxlen){
        maxlen = l2.len;
        start = l2.a;
        en = l2.b;
    }
}
cout<<str.substr(start, (en - start + 1));
}
