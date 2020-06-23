#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;

int main(){
    PBDS pb;
    pb.insert(1);
    pb.insert(5);
    pb.insert(7);
    pb.insert(10);
    for(int i = 0;i<pb.size();i++){
        cout<<i<<" "<<*(pb.find_by_order(i))<<endl;
    }
    cout<<pb.order_of_key(10);
}
