#include<bits/stdc++.h>
using namespace std;

pair<int, int> find(vector <vector<int>> v1, int key){
for(int i = 0;i<4;i++){
    for(int j = 0;j<4;j++){
        if(v1[i][j] == key){
            return make_pair(i, j);
        }
    }
}
}
int findksmallestelement(vector<vector<int>> arr, int k){
unordered_map <int, int> um;// for marking it has been added
priority_queue <int, vector<int> , greater<int>> pq;
for(int i = 0;i<4;i++){
    pq.push(arr[0][i]);
    um[arr[0][i]]++;
}
while(k--){
    int top = pq.top();
    if(k == 0)return top;
    pair<int, int> index = find(arr, top);
    int i = index.first;
    int j = index.second;
    pq.pop();
    if(i+1 < 4){
        int a = arr[i+1][j];
        if(um[a] == 0){
            pq.push(a);
            um[a]++;
        }}
        if(j+1 < 4){
        int b = arr[i][j+1];
        if(um[b] == 0){
            pq.push(b);
            um[b]++;
        }
    }
}
}

int main(){
vector<vector<int>> arr= {{10, 20, 30, 40,}, {15, 25, 35, 45}, {24, 29, 37, 48}, {32, 33, 39, 50}};
int k;
cin>>k;
cout<<findksmallestelement(arr, k);
}
