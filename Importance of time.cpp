#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
deque <int> calling;
queue <int> ideal;
int i = 0;
while(i<n){
    int num;
    cin>>num;
    calling.push_back(num);

    i++;
}
i = 0;
while(i<n){
    int num;
    cin>>num;

    ideal.push(num);
    i++;
}
int cost = 0;
while(!calling.empty()){
    int topofideal = ideal.front();
    int topofcalling = calling.front();
    if(topofideal == topofcalling){
        ideal.pop();
        calling.pop_front();
        cost++;
    }
    else{
        while(topofideal != topofcalling){
            calling.pop_front();
            calling.push_back(topofcalling);
            topofcalling = calling.front();
            cost++;
        }
        ideal.pop();
        calling.pop_front();
        cost++;
    }
}
cout<<cost;
}
