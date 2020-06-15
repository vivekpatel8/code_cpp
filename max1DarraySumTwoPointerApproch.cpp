#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n){
int cs = 0, ms = 0;
for(int i = 0;i<n;i++){
    cs = cs + a[i];
    if(cs<0){
        cs = 0;
    }
    ms = max(cs,ms);
}
return ms;
}
int maxCircularSum(int a[], int n)
{
    // Case 1: get the maximum sum using standard kadane'
    // s algorithm
    int max_kadane = kadane(a, n);

    // Case 2: Now find the maximum sum that includes
    // corner elements.
    int max_wrap = 0, i;
    for (i = 0; i < n; i++)
    {
            max_wrap += a[i]; // Calculate array-sum
            a[i] = -a[i]; // invert the array (change sign)
    }

    // max sum with corner elements will be:
    // array-sum - (-max subarray sum of inverted array)
    max_wrap = max_wrap + kadane(a, n);

    // The maximum circular sum will be maximum of two sums
    return (max_wrap > max_kadane)? max_wrap: max_kadane;
}

int main(){
int T ;
cin>>T;
while(T--){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxCircularSum(arr,n)<<endl;

}
}
