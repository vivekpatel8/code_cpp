#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
int marks;
string name;
};
void bucketSort(Student s[], int n){
// max marks = 100
vector <Student> v1[101];
for(int i =  0;i<n;i++){
    int mark = s[i].marks;
    v1[mark].push_back(s[i]);
}
for(int i = 100;i>=0;i--){
    for(vector <Student> :: iterator it = v1[i].begin();it!=v1[i].end();it++){
        cout<<(*it).marks<<" "<<(*it).name<<endl;
    }
}

}


int main(){
int n ;
cin>>n;
Student s[n];
for(int i = 0;i<n;i++){
    cin>>s[i].marks;
    cin>>s[i].name;
}
bucketSort(s,n);
}
