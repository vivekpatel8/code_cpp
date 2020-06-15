#include<bits/stdc++.h>
using namespace std;
void stockSpan(int Price[], int n){
    stack <int> s1;
    int arrDay[100];
for(int day = 0;day<n;day++){
    int currentPrice = Price[day];
    while(!s1.empty() && currentPrice > Price[s1.top()]){
        s1.pop();
    }
    int betterDay = (s1.empty())? 0 : s1.top();
    arrDay[day] = day - betterDay;
    s1.push(day);
}
for(int i = 0 ;i<n;i++){
    cout<<arrDay[i]<<" ";
}
}
int main(){
int n = 8;
int arr[] = {100, 80, 60, 70, 60, 75, 85, 111};
stockSpan(arr, n);
}
