#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[100];

for(int i = 0;i<n;i++){
    cin>>arr[i];
}
arr[10] = '\0';
for(int i = 0;arr[i] != '\0';i++){
    cout<<arr[i]<<" ";
}


}
