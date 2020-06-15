#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> custom; // freq then value

bool comp(custom c1, custom c2){
if(c1.second == c2.second){
    return c1.first < c2.first;
}
return c1.second > c2.second;
}
struct compare
{
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        // if frequencies of two elements are same
        // then the larger number should come first
        if (p1.second == p2.second)
            return p1.first < p2.first;

        // insert elements in the priority queue on the basis of
        // decreasing order of frequencies
        return p1.second > p2.second;
    }
};


int main(){
int t;
cin>>t;
while(t--){
    int n, k;
    cin>>n>>k;
    unordered_map <int, int> um;

    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        um[num]++;
        vector <pair<int, int>> freq_arr(um.begin(), um.end());
        sort(freq_arr.begin(), freq_arr.end(), compare());
        /*priority_queue<custom, vector<custom>,compare> pq(um.begin(), um.end());
        for(int j = 0;j<k;j++){
            if(!pq.empty()){
                cout<<pq.top().first<<" ";
                pq.pop();
            }
        }*/
        for(int j = 0;j<k;j++){
            if(j<freq_arr.size()){
                cout<<freq_arr[j].first<<" ";
            }
        }
    }
    cout<<endl;
}
}
