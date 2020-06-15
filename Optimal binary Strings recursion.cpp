/*#include<bits/stdc++.h>
using namespace std;

int f(int n){
if(n == 1 || n == 0)return n+1;

return f(n-1) + f(n-2);
}

int main(){
cout<<f(3);
}
*/

#include <iostream>
using namespace std;
void f(int n, char src, char dec, char helper){
    if(n == 0)return;
    f(n-1, src, helper, dec);
    std::cout << n << src <<" "<< dec << std::endl;
    f(n-1, helper, dec, src);
}
int main() {
	f(4, 'a', 'c', 'b');
}
