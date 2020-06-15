#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int l = 1;
    int r = n-1;
    int cnt = 0;
    while(l<r){
        cnt++;
        l++;
        r--;
    }
    cout<<cnt<<endl;
}
}
