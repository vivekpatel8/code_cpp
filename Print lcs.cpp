#include<bits/stdc++.h>
using namespace std;



int grid[100][100] = {0};
void fillGrid(string a, string b, int lena, int lenb){

for(int i = 1;i<=lena;i++){
    for(int j = 1;j<=lenb;j++){
        int q = 0;
        if(a[i-1] == b[j-1]){
            q =  1 + grid[i-1][j-1];
        }
        else{
            q = max(grid[i][j-1], grid[i-1][j]);
        }
        grid[i][j] = q;
    }
}

}
stack <char> ans;
void printLCS(string a, string b, int lena, int lenb){

if(lena < 1 || lenb < 1){
    return;
}
if(a[lena-1] == b[lenb-1]){
        ans.push(a[lena-1]);
    printLCS(a, b, lena - 1 , lenb - 1);
}
else{
    if(grid[lena][lenb] == grid[lena-1][lenb]){
        printLCS(a, b, lena - 1 , lenb);
    }
    else{
        printLCS(a, b, lena , lenb - 1);
    }
}
}

int main(){
string a, b;
cin>>a>>b;
int lena = a.length();
int lenb = b.length();
fillGrid(a, b, lena, lenb);
printLCS(a, b, lena, lenb);
while(!ans.empty()){
    cout<<ans.top();
    ans.pop();
}

}
