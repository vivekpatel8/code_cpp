#include<iostream>
using namespace std;

int main(){
int n , m , k , s;
cin>>n;
cin>>m;
cin>>k;
cin>>s;
char a[n][m];
for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        cin>>a[i][j];
    }
}
for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
        if(s>=k){

            if(a[i][j] == '.'){
                s = s - 2;
                if(j != m-1){
                s--;
            }
            }
            else if(a[i][j] == '*'){
                s = s+5;
                if(j != m-1){
                s--;
            }
            }
            else if(a[i][j] == '#'){
				break;
            }
        }
        else{


			if(i<n-1){
				i = n;
				cout<<"No";
				break;

			}

        }
    }
}
if(s>=k){
    cout<<"Yes"<<endl;
    cout<<s;
}
}
