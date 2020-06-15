#include<iostream>
using namespace std;

void findNumberIndex(int arr[], int n, int num){
int first = -1, last = -1;
for(int i = 0;i<n;i++){
    if(arr[i] == num){
        first = i;
        break;
    }
}
for(int i = n-1;i>=0;i--){
    if(arr[i] == num){
        last = i;
        break;
    }
}
cout<<first<<" "<<last<<endl;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int t;
cin>>t;
while(t--){
    int num;
    cin>>num;
    findNumberIndex(arr,n,num);
}

}
