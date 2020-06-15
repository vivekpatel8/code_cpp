#include<bits/stdc++.h>
using namespace std;
vector <string> grid[10];
vector <string> words;
void wp(int index){
    int s, e;
    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
            if(grid[i][j] == '-'){
                s = j;
            }

        }
    }

}

int main(){
string w, s ="";
for(int i  = 0;i<10;i++){
    grid[i];
}
cin>>w;
for(int i = 0;w[i] != '\0';i++){
    if(w[i] == ';'){
        words.push_back(s);
        s ="";
    }
    else{
        s+=w[i];
    }
}
words.push_back(s);


}
