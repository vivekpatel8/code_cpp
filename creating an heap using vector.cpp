#include<bits/stdc++.h>
using namespace std;
//max heap
void heapup(vector <int> & heap, int currentindex){
    int indexofparent = (currentindex - 1)/ 2;
if(heap[indexofparent] < heap[currentindex]){
    swap(heap[indexofparent] , heap[currentindex]);
    heapup(heap,indexofparent);
}
}

void insertInHeap(vector <int> & heap, int num){
heap.push_back(num);
heapup(heap, heap.size() - 1);
}

void buildheapfromarray(vector <int> & heap){
for(int i = heap.size()-1 ; i>=0;i--){
    heapup(heap, i);
}
}

int main(){
vector <int> heap;
int num;
cin>>num;
while(num != -1){
    //insertInHeap(heap, num);
    heap.push_back(num);
    cin>>num;
}
buildheapfromarray(heap);
for(auto x : heap){
    cout<<x<<" ";
}
}
