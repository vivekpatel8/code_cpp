#include<iostream>
#include<bitset>
using namespace std;
bitset <30> col, d1, d2;
void solve(int r, int n, int &ans){
// base case
if(r == n){
    // increasing the ans
    ans++;
    return ;
}
// traversing col wise
for(int c =0 ;c<n;c++){
    // to check can queen be placed
    // to check the col diagonal left and right
    if(!col[c] && !d1[r-c+n-1] && !d2[r+c]){

        col[c] = d1[r-c+n-1] = d2[r+c] = 1;
    // recursive formula | increasing the row
        solve(r+1, n, ans);
    // backtracking
        col[c] = d1[r-c+n-1] = d2[r+c] = 0;
    }
}

}
int main(){
int ans = 0;
solve(0,4,ans);
cout<<ans;
}
