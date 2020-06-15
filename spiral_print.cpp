#include<iostream>
using namespace std;
void spiralPrint(int arr[4][4],int r,int c){
    int startrow = 0;
    int startcol = 0;
    int endrow = r-1;
    int endcol = c-1;
    int SC = 0,ER = r-1,EC = c-1,SR = 0;
    while(startcol<endcol){
    for(int i = startcol;i<=endcol;i++){
        cout<<arr[startrow][i]<<" ";
    }
    startrow++;
    for(int i = startrow;i<=endrow;i++){
        cout<<arr[i][endcol]<<" ";
    }
    endcol--;
    for(int i = endcol;i>=startcol;i--){
        cout<<arr[endrow][i]<<" ";
    }
    endrow--;
    for(int i = endrow;i>=startrow;i--){
        cout<<arr[i][startcol]<<" ";
    }
    startcol++;
    }
    cout<<endl;
    while(SC <= EC  && SR<=ER){
        int cn = 1,tcn = r*c;
        if(cn<= tcn){

        for(int i = SR;i <= ER;i++){
            cout<<arr[i][SC]<<" "; cn++;
            }
        SC++;

        for(int i = SC;i <= EC;i++ ){cn++;
            cout<<arr[ER][i]<<" ";}
        ER--;
        if(ER>SR){
        for(int i = ER;i>= SR;i--){cn++;
            cout<<arr[i][EC]<<" ";}}

        EC--;
        if(EC>SC){
        for(int i = EC;i>=SC;i--){cn++;
            cout<<arr[SR][i]<<" ";
        }}
        SR++;
    }}

}
int main(){
int arr[4][4];
int x= 1;
for(int i = 0;i<4;i++){
    for(int j = 0;j<4;j++){
        arr[i][j] = x;
        x++;
    }
}
spiralPrint(arr,4,4);
}
