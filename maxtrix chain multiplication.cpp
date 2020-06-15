#include<bits/stdc++.h>
using namespace std;

int main(){
int n = 5;
// 5 * 4 | 4 *6 | 6 * 2 | 2 * 7
int arr [] = {5,4,6,2,7};
int m[100][100] = {0};
int s[100][100] = {0};
int j , minn = INT_MAX, q;
for(int diff = 1 ;diff < n -1 ;diff++){
    for(int i = 1;i<n-diff;i++){
        int j = i + diff;
        minn = INT_MAX;
        for(int k = 1;k<=j-1;k++){
            q = m[i][k] + m[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
            if(q < minn){
                minn = q;
                s[i][j] = k;
            }
        }
        m[i][j] = q;
    }
}
cout<<m[1][n-1];
}
