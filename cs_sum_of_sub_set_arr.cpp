#include<iostream>
using namespace std;
#include<climits>
int main(){
int arr[10];
int cs[10];
cin>>arr[0];
cs[0] = arr[0];
int current_sum ;
int max_sum = INT_MIN ;
for(int i = 1;i<10;i++){
    cin>>arr[i];
    cs[i] = cs[i-1] + arr[i];
}
int l = 0,r = 0;
for(int i = 0;i<10;i++){
    for(int j = i;j<10;j++){
        current_sum = cs[j] - cs[i-1];
        if(current_sum > max_sum){
            max_sum = current_sum;
            l = i;
            r = j;
        }
    }
}
cout<<max_sum<<endl;
cout<<arr[-1];
}
