#include<iostream>
using namespace std;
void sumOfAll(int arr[3][3],int r,int c){
    int sum1 = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
                sum1 =sum1 + ((arr[i][j])*(((i+1)*(j+1))*(r-i)*(c-j)));
        }
    }
    cout<<sum1<<endl;
}
void MaxSumOfSortedMatrix(int arr[][4],int r,int c){
    for(int i = r-1;i>=0;i--){
        for(int j = c-1;j>=0;j--){
                if(j-1>=0)
            arr[i][j-1] = arr[i][j]+arr[i][j-1];
        }
    }
    for(int i = r-1;i>=0;i--){
        for(int j = c-1;j>=0;j--){
            if(j-1>=0)
            arr[j-1][i] = arr[j][i]+arr[j-1][i];
        }
    }
    int max1 = INT_MIN, row =0 , col =0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(arr[i][j]>max1){
                max1 = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout<<row<<" "<<col<<endl;
}

void staircaseSearch(int arr[][4],int r,int c,int key){
    int i = 0,j = 3;
    while(i<r){
        if(arr[i][j] == key){
            cout<<endl<<i<<" "<<j<<endl;
            return ;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
}
void sumOfSubMatrixTechnique1(int arr[][2],int n){
    int x =0,sum =0;
for(int li = 0;li<n;li++){
    for(int lj = 0;lj<n;lj++){
        for(int bi = li;bi<n;bi++){
            for(int bj= lj;bj<n;bj++){
                sum = 0;
                for(int i = li;i<=bi;i++){
                    for(int j = lj;j<=bj;j++){
                        sum+=arr[i][j];
                    }
                }
                x++;
                cout<<x<<" : "<<sum<<endl;

            }
        }
    }
}
}
int main(){
int arr[3][3];
for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
        cin>>arr[i][j];
    }
}
sumOfAll(arr,3,3);
}
