#include<bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int, int>> custom;

vector <int> mergeksortedarray(int **arr, int k, int n){
priority_queue <custom, vector<custom>, greater<custom>> pq;
vector <int> res;
for(int i = 0;i<k;i++){
    pq.push({arr[i][0], {i, 0}});
}
while(!pq.empty()){
    custom crr = pq.top();
    pq.pop();
    int x = crr.first;
    res.push_back(x);
    int y = crr.second.first;
    int z = crr.second.second;
    if(z+1 < n){
        pq.push({arr[y][z+1], {y, z+1}});
    }
}
return res;
}

int main(){
int k, n;
cin>>k>>n;
int **arr;
arr = new int*[k];
for(int i = 0;i<k;i++){
    arr[i] = new int[n];
}
for(int i = 0;i<k;i++){
for(int j = 0;j<n;j++){
cin>>arr[i][j];
}}
vector <int> res = mergeksortedarray(arr, k, n);
for(auto x : res){
    cout<<x<<" ";
}
}
