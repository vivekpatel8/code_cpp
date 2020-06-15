#include<bits/stdc++.h>
using namespace std;

void findL(int arr[], int n){
    stack <int> l1;
    int area = 0, maxarea = 0;
    int i = 0, r, l;
    while(i<n){
        r = i;
        if(l1.empty() || arr[i] > arr[l1.top()]){
            l1.push(i++);
        }
        else{
            int c = l1.top();
            l1.pop();
            area = arr[c] * ((l1.empty()) ? r : r - l1.top() - 1);
            maxarea = max(area, maxarea);
        }
    }
    while(!l1.empty()){
        int c = l1.top();
        l1.pop();
        area = arr[c] * ((l1.empty()) ? i : i - l1.top() - 1);
        maxarea = max(area, maxarea);
    }
cout<< maxarea;
}
int main(){
int arr[100000];
int n ;
cin>>n;
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
findL(arr, n);
}
