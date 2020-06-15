#include<iostream>
#include<vector>
using namespace std;

void printPrimeFactors(int n){
int i = 2;
vector <pair<int, int>> primesFactors;
int cnt = 1;
for(i = 2;i*i <= n;i++){
    if(n % i == 0){
         cnt = 0;
        while(n%i == 0){
            n /= i;
            cnt++;
        }
        primesFactors.push_back(make_pair(i, cnt));
    }
}
if(n != 1){
    primesFactors.push_back(make_pair(n, cnt));
}

for(auto x : primesFactors){
    cout<<x.first<<" "<<x.second<<endl;
}

}

int main(){
int n;
cin>>n;
printPrimeFactors(n);
}
