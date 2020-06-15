#include<bits/stdc++.h>
using namespace std;
/*int bsearchs(string str,int l, int r, int key){
int index = -1;
while(l<=r){
    int mid = (l+r)/2;
    if(str[mid] >= str[key]){

    }
}

}*/
void nextP(string str, int len){
int notIndec = 0;
for(int i = len-1;i>0;i--){
    if(str[i-1]<str[i]){
        notIndec = i-1;
        break;
    }
}
int nextJustGreaterElement =

swap(str[notIndec], str[nextJustGreaterElement]);
reverse(str[notIndec+1], str[len-1]);

}

int main(){
string str;
cin>>str;
string str1 =
int len = str.length();
nextP(str, len);
cout<<str;
}
