#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
//      cordinates frequency
unordered_map <int, int> y_const;
unordered_map <int, int> x_const;
int x_arr[n], y_arr[n];
for(int i = 0;i<n;i++){
    int x, y;
    cin>>x>>y;
    x_const[x]++;
    y_const[y]++;
    x_arr[i] = x;
    y_arr[i] = y;
}
int ans = 0;
for(int i = 0;i<n;i++){
    int xn = x_arr[i];
    xn = x_const[xn];//frequency
    int yn = y_arr[i];
    yn = y_const[yn];//frequency
    if(xn <=1 || yn <= 1){
        continue;
    }
    else{
        ans += (xn - 1) * (yn - 1);
    }
}
cout<<ans<<endl;
}
