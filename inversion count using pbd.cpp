#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> PBDS;

#define ll long long
int main(){
int t;
cin>>t;
while(t--){
PBDS pb;
int n;
cin>>n;
int arr[n];

for(int i = 0;i<n;i++)cin>>arr[i];

ll ans = 0;
for(int i = 0;i<n;i++){
    ans += (pb.size() - pb.order_of_key({arr[i], i}));
    pb.insert({arr[i], i});
}
cout<<ans<<endl;
}
}
