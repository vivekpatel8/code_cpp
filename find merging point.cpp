#include<bits/stdc++.h>
using namespace std;

int main(){
list <int> l1;
list <int> l2;
int n1, n2;
cin>>n1;
int num;

int n11 = n1;

while(n11--){
    cin>>num;
    l1.push_back(num);
}
cin>>n2;
int n22 = n2;
while(n22--){
    cin>>num;
    l2.push_back(num);
}
int d;
if(n1 > n2){
    d = n1 - n2;
     auto it = l1.begin();
    auto it2 = l2.begin();
    while(d--){
        it++;
    }

        while(it != l1.end()){
        if((*it) == (*it2)){
            cout<<(*it);
            break;

        }
                    it++;
            it2++;
    }
    if(it == l1.end())
    cout<<-1;
}

else if(n1 < n2){
    d = n2 - n1;
        auto it = l1.begin();
    auto it2 = l2.begin();
    while(d--){
        it2++;
    }

        while(it != l1.end()){
        if((*it) == (*it2)){
            cout<<(*it);
            break;

        }
         it++;
            it2++;
    }
        if(it == l1.end())
    cout<<-1;
}
else if(n1 == n2){
 auto it = l1.begin();
    auto it2 = l2.begin();
        while(it != l1.end()){
        if((*it) == (*it2)){
            cout<<(*it);
            break;

        }
                    it++;
            it2++;
    }
        if(it == l1.end())
    cout<<-1;
}

}
