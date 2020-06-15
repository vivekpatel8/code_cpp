#include<bits/stdc++.h>
using namespace std;

void heapup(vector <int> & heap, int index){
int indexofparent = (index - 1)/2;
if(heap[indexofparent] < heap[index]){
    swap(heap[indexofparent] ,heap[index]);
    heapup(heap, indexofparent);
}
}

void builtHeap(vector <int> & heap, int num){
    heap.push_back(num);
heapup(heap, heap.size() - 1);
}
void heapdown(vector <int> &heap, int largest,int lastindex){
int leftlargest = (largest * 2 ) + 1 ;
int rightlargest = (largest * 2 ) + 2;
if(leftlargest > lastindex && rightlargest > lastindex){
    return;
}
int largest1 = largest;
if(leftlargest <= lastindex && heap[leftlargest] > heap[largest1]){
    largest1 = leftlargest;
}
if(rightlargest <= lastindex and heap[rightlargest] > heap[largest1]){
    largest1 = rightlargest;
}
if(largest1 == largest){
    return;
}
swap(heap[largest1], heap[largest]);
heapdown(heap, largest1, lastindex);
}
void heapsort(vector <int> & heap){
int s = heap.size() - 1;
for(int i = s;i>=0;i--){
    swap(heap[0], heap[s]);
    heapdown(heap, 0, s - 1);
    s--;
}
}
int main(){
vector <int> heap;
int num;
cin>>num;
while(num != -1){
    builtHeap(heap, num);
    cin>>num;
}
heapsort(heap);
for(auto x : heap){
    cout<<x<<" ";
}
}
