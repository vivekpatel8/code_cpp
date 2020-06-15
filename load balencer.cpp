#include<bits/stdc++.h>
using namespace std;



int main(){
while(1){
    int n;
    cin>>n;
    if(n == -1)break;
    int arr[n];
    int load = 0, max_load = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        load += arr[i];
    }
    if(load % n != 0){
        cout<<-1<<endl;
    }
    else{
        int baln = load / n;
        load = 0;
        for(int i = 0;i<n;i++){
            load += (arr[i] - baln);
            int ans = max(load , -load);
            max_load = max(max_load, ans);
        }
        cout<<max_load<<endl;
    }
}
}
