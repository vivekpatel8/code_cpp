#include<bits/stdc++.h>
using namespace std;

int maxP(int *P, int *W, int n, int w){
    if(n == 0 || w == 0){
        return 0;
    }
    int ans = 0;
    int inc = 0, exc = 0;
    if(W[n-1] <= w){
        inc = P[n-1] + maxP(P, W, n-1, w - W[n-1]);
    }
    exc = maxP(P , W, n-1, w);
    ans = max(inc, exc);
    return ans;
}

int main(){
int p[] = {80, 80, 70, 50 , 20};
int c[] = {5, 6, 3, 3, 3};
int ans = maxP(p, c, 3, 10);
cout<<ans;
}
