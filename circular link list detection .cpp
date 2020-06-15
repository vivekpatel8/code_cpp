#include<iostream>
#include<list>
using namespace std;

int arr[100005] = {0};
int main(){
    list <int> l1;
    int num;
    cin>>num;
    while(num != -1){
        arr[num]++;
        if(arr[num] < 2){
        l1.push_back(num);
        cin>>num;
        }
        else{
            break;
        }
    }
    for(auto it = l1.begin(); it!= l1.end();it++)
        cout<<(*it)<<" ";
}
