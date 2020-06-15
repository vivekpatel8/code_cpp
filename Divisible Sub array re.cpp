#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int freq[100005] = {0};
    int arr[100005];
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        sum %= n;
        sum = (sum + n)%n;
        freq[sum]++;
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        int m  = freq[i];
        if(m > 2){
            ans += ((m)*(m-1))/2;
        }
    }
    cout<<ans<<endl;
}
}
