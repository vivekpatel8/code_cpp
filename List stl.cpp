#include<list>
#include<iostream>
using namespace std;
bool comp(int a, int b){
return true;
}
int main(){
list <int> l1;
list <int> l2;
int n, k;
cin>>n>>k;
for(int i = 1;i<=n;i++){

    if(i%k == 0){
    l1.merge(l2, comp);
    l1.clear();
    }
    int num;
    cin>>num;
    l1.push_front(num);
}
for(int it : l2){
    cout<<(it)<<" ";
}
return 0;
}
