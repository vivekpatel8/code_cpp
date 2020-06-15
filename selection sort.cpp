#include<iostream>
using namespace std;
void swap(int arr[],int a,int b){
int temp = arr[a];
arr[a] = arr[b];
arr[b] = temp;
}
void selectionSort(int arr[],int size){
for(int index = 0;index<size-1;index++){
    int min = index;
    for(int ptr = index+1;ptr<size;ptr++){
            if(arr[ptr]<arr[min]){
                    min = ptr;
            }
    }
    if(index!=min){
        swap(arr,index,min);
    }
}
}

int main(){
    int arr[10] = {54,5,633,511,33,51,618,4,3,22};
selectionSort(arr,10);
for(int i = 0;i<10;i++){
    cout<<arr[i]<<endl;
}
}
