#include<bits/stdc++.h>
using namespace std;

int main(){
int q ;
cin>>q;
stack <int> s;
while(q--){
    int qe;
    cin>>qe;
    if(qe == 1){
        if(!s.empty()){
            cout<<s.top()<<endl;
            s.pop();
        }
        else{
            cout<<"No Code"<<endl;
        }
    }
    else if(qe == 2){
        int n;
        cin>>n;
        s.push(n);
    }
}
}
