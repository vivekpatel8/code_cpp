#include<iostream>
#include<string>
using namespace std;



int main(){
int k;
string str;
cin>>k>>str;
int len = str.length();
int maxsizea  = 0, maxsizeb = 0, maxsizec = 0, maxsized =0;
int k1 = k, k2 = k, k3 =k, k4 =k;
for(int i=0;k1 >=0 && i<len;i++){
    if(str[i] == 'a'){
        k1--;
        maxsizea++;
    }
    else{
        maxsizea++;
    }
}
for(int i=0;k2 >=0 && i<len;i++){
    if(str[i] == 'b'){
        k2--;
        maxsizeb++;
    }
    else{
        maxsizeb++;
    }
}
for(int i=len-1;k3 >=0 && i>=0;i--){
    if(str[i] == 'a'){
        k3--;
        maxsizec++;
    }
    else{
        maxsizec++;
    }
}
for(int i=len-1;k4 >=0 && i>=0;i--){
    if(str[i] == 'a'){
        k4--;
        maxsized++;
    }
    else{
        maxsized++;
    }
}
cout<<max(maxsizea, maxsizeb);

}
