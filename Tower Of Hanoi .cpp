#include<iostream>
using namespace std;

void TowerOfHenoi(int n, char src, char dest, char helper){
    if(n == 0){
        return;
    }
    TowerOfHenoi(n-1, src, helper, dest);
    cout<<"Move "<<n<<" disk from "<<src<<" to "<<dest<<endl;
    TowerOfHenoi(n-1, helper, dest, src);
}

int main(){
TowerOfHenoi(3, 'A', 'B', 'C');
}
