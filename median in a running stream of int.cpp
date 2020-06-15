#include<iostream>
#include<queue>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    priority_queue <int> maxheap;
    priority_queue <int, vector<int>, greater<int>> minheap;
    int num;
    cin>>num;
    cout<<num<<" ";
    maxheap.push(num);
    int median = num;
    for(int i =1 ;i<n;i++){
        cin>>num;
        if(maxheap.size() > minheap.size()){
            if(num < median){
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(num);
            }
            else{
                minheap.push(num);
            }
            median = (minheap.top() + maxheap.top())/2.0;
            cout<<median<<" ";
        }
        else if(minheap.size() == maxheap.size()){
            if(num < median){
                maxheap.push(num);
                median = maxheap.top();
            }
            else{
                minheap.push(num);
                median = minheap.top();
            }
            cout<<median<<" ";
        }
        else{
            if(num < median){
                maxheap.push(num);
            }
            else{
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(num);
            }
            median = (maxheap.top() + minheap.top())/2.0;
            cout<<median<<" ";
        }

    }
}
}
