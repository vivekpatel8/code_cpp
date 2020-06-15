#include<iostream>
using namespace std;

bool check(int * arr, int n){
    int a , b, c;
for(int i = 0;i<n;i++){
    for(int j = i;j<n;j++){
        for(int k = j;k<n;k++){
            a = arr[i] * arr[i];
            b = arr[j] * arr[j];
            c = arr[k] * arr[k];
            if(a+b == c || c+a == b || c+b == a)return true;
        }
    }
}
return false;
}

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    if(check(arr, n))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

}
