#include<bits/stdc++.h>
using namespace std;

int main(){
priority_queue <double> maxheap;//as left sub tree
priority_queue <double, vector<double> , greater<double>> minheap; // as right subtree
int n;
cin>>n;
double arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

double median = arr[0];
cout<<median<<" ";
maxheap.push(median);

for(int i = 1;i<n;i++){
    double num = arr[i];
  if(maxheap.size() > minheap.size()){
    if(num < median){
    minheap.push(maxheap.top());
    maxheap.pop();
    minheap.push(num);
    }
    else{
        minheap.push(num);
    }
    median = (maxheap.top() + minheap.top()) / 2.0;
  }
  else if(maxheap.size() == minheap.size()){
    if(num < median){
        maxheap.push(num);
        median = maxheap.top();
    }
    else{
        minheap.push(num);
        median = minheap.top();
    }
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
  }
  cout<<median<<" ";
}
}
