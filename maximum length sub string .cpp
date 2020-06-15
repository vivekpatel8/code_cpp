#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int len = s.length();
    int visited[256];
    int current_len = 1;
    int max_len = 1;
    for(int i = 0; i<256; i++){
        visited[i] = -1;
    }
    visited[s[0]] = 0;
    for(int i = 1;i<len;i++){
        int last_visted = visited[s[i]];
        if(last_visted == -1 || i - current_len > last_visted){
            current_len++;
            max_len = max(max_len, current_len);
        }
        else{
            max_len = max(current_len, max_len);
            current_len = i - last_visted;

        }
        visited[s[i]] = i;
    }
    max_len = max(max_len, current_len);
    cout<<max_len<<endl;
}
}
