#include<iostream>
using namespace std;

bool checkSorted(int * a, int n){
for(int  i = 0;i<n-1;i++){
    if(a[i] > a[i+1]){
        return false;
    }
}
return true;
}
bool only1or0(int * b, int n){
    int arr[2];
for(int  i = 0;i<n;i++){
        arr[b[i]]++;
}
if(arr[0] == 0 || arr[1] == 0)return true;
return false;
}

bool check(int *a, int *b, int n){
    if(checkSorted(a, n)){
        return true;
    }
    else if(only1or0(b, n)){
        return false;
    }
    else{
        int minIdx = INT_MAX;
        for(int i = 0;i<n;i++){
            if(a[i] < a[minIdx]){
                minIdx = i;
            }
        }
        int s = 0, e = minIdx;
        if(b[s] != b[e]){
            swap(a[s], a[e]);
        }

    }
}


int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }
}
}
