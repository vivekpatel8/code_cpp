#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        string rollno;
    student(string s, string b){
    name = s;
    rollno = b;
    }
    bool operator == (const student & s)const{// const is needed
    return s.rollno == rollno ? true : false;
    }
};

class hashfn{
public:
    size_t operator ()(const student & s)const{
    return s.name.length() + s.name.length();
    }

};

int main(){
unordered_map <student, int, hashfn> um;

student s2("rohit", "45");
student s3("rohan", "42");
student s4("rakesh", "50");
student s1("vivek", "44");
um.insert(make_pair(s1, 1));
um.insert(make_pair(s2, 2));
um.insert(make_pair(s3, 3));
um.insert(make_pair(s4, 4));
for(auto it : um){
    cout<<it.first.name<<" "<<it.second<<endl;
}
}
