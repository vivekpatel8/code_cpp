#include<bits/stdc++.h>
using namespace std;

void heapup(vector <int> & heap, int indexofparent, int currentindex){
if(heap[indexofparent] < heap[currentindex]){
    swap(heap[indexofparent] , heap[currentindex]);
    heapup(heap,(indexofparent / 2) ,indexofparent);
}
}

void insertInHeap(vector <int> & heap, int num){
heap.push_back(num);
int indexofparent = (heap.size() - 1)/2;
int currentindex = heap.size() - 1;
heapup(heap, indexofparent, currentindex);
}
// heapdown
void heapdown(vector <int> &heap, int largestelement){
int indexofleftelement = (largestelement * 2) + 1;
int indexofrightelement = (largestelement * 2) + 2;
int current = largestelement;
if(indexofleftelement >= heap.size() && indexofrightelement >= heap.size()){
    return;
}
if(indexofleftelement < heap.size() && heap[indexofleftelement] > heap[current]){
    largestelement = indexofleftelement;
}
if(indexofrightelement < heap.size() && heap[indexofrightelement] > heap[current]){
    largestelement = indexofrightelement;
}
if(largestelement == current){
    return;
}
swap(heap[largestelement], heap[current]);
heapdown(heap, largestelement);
}

void deletenodesinheap(vector <int> &heap, int indx)
{
    swap(heap[heap.size() - 1], heap[indx]);
    heap.pop_back();
    heapdown(heap, indx);
}
int main(){
vector <int> heap;
int num;
cin>>num;
while(num != -1){
    insertInHeap(heap, num);
    cin>>num;
}
for(auto x : heap){
    cout<<x<<" ";
}
cin>>num;// this is index to be deleted
deletenodesinheap(heap, num);
cout<<endl;
for(auto x : heap){
    cout<<x<<" ";
}
}
