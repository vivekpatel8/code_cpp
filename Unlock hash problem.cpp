#include<bits/stdc++.h>
using namespace std;

int main(){
int n, k;
cin>>n>>k;
int arr[n];
unordered_map <int, int> um;
//5 2
//5 4 1 2 3
for(int i = 0;i<n;i++){
    int num;
    cin>>num;
    arr[i] = num;
    um[num] = i;// 3 -> 0  5 -> 4
}

for(int i = n;i>0;i--){
    int idx = um[i];// 4  //  1 //
    if(idx == n-i){ // 4 == 5-5 //  1 == 1
    }
    else{
        k--;
    //    4          0  //
    int temp = arr[n-i];
    swap(arr[idx], arr[n - i]);
    um[i] =  n - i;
    um[temp] = idx;
    }if(k == 0)break;

}

for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
