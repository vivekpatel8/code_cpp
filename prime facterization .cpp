#include<iostream>
#include<vector>
#define s 100000
#define ll long long
using namespace std;
vector <int> primes;
void primeSevive(){
bool p[s+5] = {0};
for(int i = 2;i<=s;i++){
    if(p[i] == 0){// is prime
        primes.push_back(i);// push prime nos
        for(int j = i; j<=s;j+=i){// making the multiples of i as not prime
            p[j] = 1;
        }
    }
}
}
void printPrimeFactor(int n){
    vector <int> primeFactors;
    int i = 0;
    int p = primes[i];
    while(p*p <= n){
        if(n%p == 0){
            primeFactors.push_back(p);
            while(n%p == 0){
            n = n / p;}
        }
        i++;
        p = primes[i];
    }
    if(n != 1){
        primeFactors.push_back(n);
    }
    for(int i = 0 ;i < primeFactors.size();i++){
        cout<<primeFactors[i]<<" ";
    }
    cout<<endl;
}
int main(){
primeSevive();
int n;
cin>>n;
printPrimeFactor(n);
}
