#include<iostream>
#include<cstring>
using namespace std;

int main(){
char a[1000];
char largest[1000];
int current = 0;
int largestno = 0;
int n;
cin>>n;
cin.get();
while(n--){
  cin.getline(a,100);
  if(strlen(a)>largestno){
    strcpy(largest,a);
    largestno = strlen(a);
  }
}
cout<<largest<<" length "<<largestno;
}
