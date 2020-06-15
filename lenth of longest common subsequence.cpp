#include<bits/stdc++.h>
using namespace std;

int lenthofLCS(string a, string b){
int lena = a.length();
int lenb = b.length();
int grid[100][100] = {0};

for(int i = 1;i<=lena;i++){
    for(int j = 1;j<=lenb;j++){
        int q = 0;
        if(a[i-1] == b[j-1]){
            q = 1 + grid[i-1][j-1];
        }
        else{
            q = max(grid[i][j-1] , grid[i-1][j]);
        }
        grid[i][j] = q;
    }
}
cout<<"  ";
for(int j = 0;j<lenb;j++)cout<<b[j]<<" ";
cout<<endl;
for(int i = 1;i<=lena;i++){
    cout<<a[i-1]<<" ";
    for(int j = 1;j<=lenb;j++){
        cout<<grid[i][j]<<" ";
    }
    cout<<endl;
    }
return grid[lena][lenb];
}

// using recursion
int f(string a, string b, int lena, int lenb, int i, int j){
    if(i >= lena || j >= lenb)return 0;
        if(a[i] == b[j]){
        return 1 + f(a, b, lena, lenb, i+1, j+1);
        }
        else{
        return max(f(a, b, lena, lenb, i + 1, j), f(a, b, lena, lenb, i, j+1));
        }
}

int main(){
string a, b;
cin>>a>>b;
cout<<endl;
//cout<<lengthofLCS(a, b);
int lena = a.length();
int lenb = b.length();
cout<<f(a, b, lena, lenb, 0, 0);
}
