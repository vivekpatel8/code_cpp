#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	   string a,b;
	   cin>>a>>b;
	   if(a == b){
	       cout<<"0"<<endl;
	   }
	   else{bool yes = false;
	       for(int i = 0;i<a.length();i++){
	           char k = a[i];
	           a[i] = b[i];
	           if(a == b){
	               yes = true;
	               break;
	           }
	           else{
	               a[i] = k;
	           }

	       }

	       if(yes){
	       cout<<"1"<<endl;
	       }
	       else{
	           cout<<"0"<<endl;
	       }
	   }

	}
	return 0;
}
