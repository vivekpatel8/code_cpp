#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
bool comp(string s1,string s2){
return s1.length()<s2.length();
}
int main(){
string s1[100];
int n,i=0;
cin>>n;
while(i<n){
    cin>>s1[i];
    i++;
}

sort(s1,s1+n,comp);
cout<<"sorted";
for(i = 0;i<n;i++){
    cout<<s1[i]<<endl;
}

}
