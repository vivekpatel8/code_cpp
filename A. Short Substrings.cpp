#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
    string str;
    cin>>str;
    int len = str.length();
    for(int i = 0;i<len;i+=2){
        cout<<str[i];
    }
    cout<<str[len-1];
    cout<<endl;
}

}
