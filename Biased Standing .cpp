#include<bits/stdc++.h>
using namespace std;

int abs(int a, int b){
int x = a -b;
if(x < 0)x = -1* x;
return x;
}

int main(){
int t;
cin>>t;
while(t--){
    int arr[10000] = {0};
    int n;
    cin>>n;
    int num;
    string str;
    for(int i = 0;i<n;i++){
        cin>>str>>num;
        arr[num]++;
    }
    int actual_rank = 1;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        while(arr[i]){
            sum += abs(actual_rank , i);
            actual_rank++;
            arr[i]--;
        }
    }
    cout<<sum<<endl;
}
}
