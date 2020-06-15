#include<iostream>
#include<list>
using namespace std;

int main(){
int n, mid;
cin>>n;
list <int> l1, l2;
int num;
for(int i = 0;i<n;i++){
    cin>>num;
    l1.push_back(num);
    l2.push_front(num);
}
if(n%2 == 0){
    mid = n / 2;
}
else{
    mid = n / 2 +1;
}
bool yes = true;
auto it = l1.begin();
auto it2 = l2.begin();
while(mid--){
    if((*it) != (*it2)){
        yes = false;
        break;
    }
    it++;
    it2++;
}
if(yes)
    cout<<"true";
else
    cout<<"false";
}
