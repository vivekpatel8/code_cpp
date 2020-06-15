#include<iostream>
#include<string>
using namespace std;
#define ll long long
void SuperDigit(string n, int k, ll sum){
if(n.length() == 1){
        cout<<n;
        return;
}
for(int i = 0;i<n.length();i++){
    sum+= (n[i] - '0');
}
if(k>0){
    sum *= k;
    SuperDigit(to_string(sum), 0, 0);
}
else{
    SuperDigit(to_string(sum), 0, 0);
}

}


int main(){
int k;
string n;
cin>>n>>k;
SuperDigit(n, k,0);
}
