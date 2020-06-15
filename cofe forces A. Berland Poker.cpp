#include<bits/stdc++.h>
using namespace std;

/*
int main(){
int t;
cin>>t;
while(t--){
    int n, m, k;
    cin>>n>>m>>k;
    int maxj = 0;
    int ans ;
    if(m == 0){
        ans = 0;
    }
    else if(n == k){
        ans = 0;
    }
    else{
        int nk = n / k;
        if(nk == m){
            ans = m;
        }
        else if(m < nk){
            ans = m;
        }
        else if(nk < m){//
            maxj = nk;
            int nextj = maxj - 1;
            ans = maxj - nextj;
        }
    }
    cout<<ans<<endl;
}
}
*/

#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m,k;
      cin>>n>>m>>k;
      int cardss= n/k;
      int winner1=min(cardss,m);
      int left=m-winner1;
      --k;
      int mxother1 = (left+k-1)/k;
      if(mxother1>=winner1) cout<<0;
      else cout<<winner1-mxother1;
      cout<<"\n";
    }
}
