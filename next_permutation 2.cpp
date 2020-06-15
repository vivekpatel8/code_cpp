#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
bool yes = next_permutation(s.begin(), s.end());
while(yes){
    cout<<s<<endl;
    yes = next_permutation(s.begin(), s.end());
}

}
