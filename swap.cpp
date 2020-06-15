
#include <iostream>

using namespace std;

int main()
{int a[3][3],i,j;
    for(i=0;i<3;i++){
        for(j =0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j==0||j==2){
                if(j==0){
                cout<<a[i][2]<<" ";
                }
                else{
                cout<<a[i][0]<<" ";
                }
            }
            else{
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
