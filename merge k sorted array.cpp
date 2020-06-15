#include<bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int, int>> custom;
vector <int> mergeksortedarray(vector <vector<int>> arr){
vector <int> res;
priority_queue <custom , vector<custom>, greater<custom>> pq;
for(int i = 0;i<arr.size() ;i++){
    pq.push(make_pair(arr[i][0], make_pair(i, 0)));
}
while(!pq.empty()){
    custom crr = pq.top();
    pq.pop();
    int x = crr.first;// value of element
    int y = crr.second.first; // i th arr
    int z = crr.second.second; // j th index
    res.push_back(x);
    if(z+1 < arr[y].size()){
        pq.push({arr[y][z+1], {y, z+1}});
    }
}
return res;
}
int main(){

vector <vector <int>> arr = {{1, 2 ,5},
                             {1 , 3, 4}, {5, 6, 7}};

vector <int> v1 = mergeksortedarray(arr);
for(auto x : v1){
    cout<<x<<" ";
}
}
