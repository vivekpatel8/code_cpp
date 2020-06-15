#include<bits/stdc++.h>
using namespace std;


vector <int> primes;
const int N = 100000;
bool P[N+5] = {0};
void sieve(){
for(int i = 2;i<=N;i++){
    if(P[i] == 0){ // as prime
        primes.push_back(i);
        for(int j = i;j<=N;j+=i){
            P[j] = 1; //  not prime
        }
    }
}
}


int main(){
sieve();
int t;
cin>>t;

while(t--){
    int m, n;
    cin>>m>>n;

    bool segmented[n - m + 1] = {0};
    for(auto x : primes){
        if(x*x > n){
            break;
        }
        int start = (m/x)*x;
        if(x>= m && x<=n){
            start = x * 2;
        }
        for(int i = start ; i<=n ; i += x){ // marking the multiples of x as non prime
            segmented[i - m] = 1;
        }
    }
    for(int i = m;i<=n;i++){
            if(segmented[i-m] == 0 && i != 1){
                cout<<i<<" ";
    }
}

}


}
