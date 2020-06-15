#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> custom;
bool comp(custom c1, custom c2){

if(c1.second == c2.second)return c1.first < c2.first;

return c1.second > c2.second;

}

void printkmostfrequent(int arr[], int k, int n){
unordered_map <int, int> um;

for(int i = 0;i<n;i++){
    um[arr[i]]++;
}

vector <custom> v1(um.begin() , um.end());
sort(v1.begin(), v1.end(), comp);

for(int i = 0;i<k;i++){
    cout<<v1[i].first<<" ";
}

}

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    printkmostfrequent(arr, k, n);
}
}
