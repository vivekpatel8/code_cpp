#include<iostream>
#include<cstring>
using namespace std;
#define ll long

ll arr[100005], pre[100005];
int main(){
int T;
cin>>T;
while(T--){
    int n;
    cin>>n;
    memset(pre,0,sizeof(pre));
    int sum = 0;
    pre[0] = 1;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        sum %= n;
        sum = (sum+n)%n;
        pre[sum]++;
    }
    ll ans = 0;
    for(int i = 0;i<n;i++){
        ll m = pre[i];
        ans += (m)*(m-1)/2;
    }
    cout<<ans<<endl;
}

}
