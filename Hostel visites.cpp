#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int qs;
    cin>>qs;
    priority_queue <int> pq;
    while(t--){
         // max heap
        int q;
        cin>>q;

        if(q == 1){
                    int x, y;
        cin>>x>>y;
            pq.push((x*x) + (y*y));
        }
        else{
            int poped = abs( pq.size() - qs );
            while(poped>0 && !pq.empty()){
                pq.pop();
                poped--;
            }
            cout<<pq.top()<<endl;
        }
        }

    }
