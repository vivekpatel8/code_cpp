#include<iostream>
using namespace std;

class StackArray{
private:
    int top;
    int arr[];
public:
     StackArray(int siz){
         arr[siz];
     top = -1;
     for(int i = 0;i<siz;i++)
        arr[i]=0;
     }
bool isEmpty(){
if(top == -1)
    return true;
else
    return false;
}
bool isFull(){
if(top == 4)
    return true;
else
    return false;
}
void push(int val){
if(isFull()){
    cout<<"Stack is full";}
else{
++top;
arr[top]=val;

}
}
int pop(){
if(isEmpty()){
    cout<<"Stack is empty";
}
else{
    return arr[top];
    arr[top]=0;
    top--;
}
}
};
int main(){
StackArray s1(10);
for(int i = 0;i<5;i++){
 s1.push(i);
}
for(int i =10;i>=1;i--){
    cout<<s1.pop();
}
}
