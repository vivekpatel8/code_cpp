#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int n,target,l,r;
cin>>n;
l = 0;
r = n;
int arr[n+1];
for(int i = 0;i<n+1;i++){
    cin>>arr[i];
}
target = arr[n];
sort(arr,arr+n+1);
while(l<r){
    if(target == (arr[l]+arr[r])){
        cout<<arr[l]<<" and "<<arr[r]<<endl;
        r--;
        l++;
        continue;
    }
    if(target <(arr[l]+arr[r])){
        r--;
    }
    else{
        l++;
    }
}

}
