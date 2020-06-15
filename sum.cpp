#include <iostream>
using namespace std;
void Vec();
int main(){
    int a[2];
    a[0]=1;
    a[1]=NULL;
    for(int i=0;i<2;i++){
        cout<<a[i];
    }

}
#include<vector>
void Vec(){
    vector <int> v1 ;
    v1.push_back(1);
    cout<<v1[0];
}
