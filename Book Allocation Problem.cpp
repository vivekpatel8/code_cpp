#include<iostream>
#include<iostream>
using namespace std;
bool ifPossible(int arr[],int n,int m,int min_book_page){
int total_pages_read = arr[0],student_read = 1;
for(int i = 1;i<n;i++){
        if(total_pages_read + arr[i] > min_book_page){
            student_read++;
            total_pages_read = arr[i];
            if(student_read > m){
                return false;
            }
        }
        else{
            total_pages_read += arr[i];
        }
}
return true;
}
int minPages(int arr[],int n ,int m){
    int l = arr[n-1];
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+= arr[i];
    }
    int ans = INT_MAX;
    int r = sum;
    while(l<=r){
        int mid = (l+r)/2;
        bool yes = ifPossible(arr,n,m,mid);
        if(yes){
            ans = min(ans,mid);
            r = mid-1;

        }
        else{
            l = mid + 1;
        }
    }
    return ans;
}
int main(){
int T;
cin>>T;
while(T--){
int n ,m;
cin>>n;
int arr[n];

for(int i =0;i<n;i++){
    cin>>arr[i];
}
cin>>m;
cout<<minPages(arr,n,m)<<endl;
}
}
