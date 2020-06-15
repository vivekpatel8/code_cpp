#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
list <int> l;
list <int> l2;
for(int i =0 ;i<n;i++){
    int num , x;
    cin>>num;
    x = num;
    if(x < 0){
        x = -1 * x;
    }
    if(x % 2 == 0){
        l.push_back(num);
    }
    else{
        l2.push_back(num);
    }
}
for(auto it = l2.begin(); it!= l2.end();it++){
    cout<<(*it)<<" ";
}
for(auto it = l.begin(); it!= l.end();it++){
    cout<<(*it)<<" ";
}

}
