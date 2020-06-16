#include<bits/stdc++.h>
using namespace std;

int f(int n, int * arr, int odd, int even){
if(n == 1){
    if(arr[0] & 1)return -1;
    else return 0;
}
else{
    int no_of_odd , no_of_even;
    if(n & 1){
        no_of_odd = n / 2;
        no_of_even = (n / 2)+1;
        if(odd != no_of_odd && even != no_of_even){
            return -1;
        }
        else{
                        // finding miss position of odd
            int miss_pos_of_odd = 0;
            for(int i = 0;i<n;i++){
                if(i & 1 && ((arr[i] & 1) != 1)){
                    miss_pos_of_odd++;
                }
            }
            return miss_pos_of_odd;
        }
    }
    else{
        no_of_odd = n / 2;
        no_of_even = n / 2;
        if(odd != no_of_odd && even != no_of_even){
            return -1;
        }
        else{
            // finding miss position of odd
            int miss_pos_of_odd = 0;
            for(int i = 0;i<n;i++){
                if(i & 1 && ((arr[i] & 1) != 1)){
                    miss_pos_of_odd++;
                }
            }
            return miss_pos_of_odd;
        }
    }
}

}

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int odd = 0;
    int even = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(arr[i] & 1)odd++;
        else even++;
    }
    cout<<f(n, arr, odd, even)<<endl;
}
}
