#include<bits/stdc++.h>
using namespace std;
//  1 3 2 4 5 1 2 3 6
void printLargest(int arr[], int k, int n){
    deque <int> dq; // to keep the index of large no.s
    int i = 0;
    for( ;i<k;i++){
        while((!dq.empty()) && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(;i<n;i++){
        cout<<arr[dq.front()]<<" ";
        while((!dq.empty()) && dq.front() <= i - k){
            dq.pop_front();
        }
        while((!dq.empty()) && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";
}

int main(){
int arr[10];
for(int i = 0;i<10;i++){
    cin>>arr[i];
}
printLargest(arr, 3, 10);
}
