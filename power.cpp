#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){
    if(b == 0){
        return 1;
    }
    return a*power(a,b-1);
}
int fastPower(int a, int b){
    if(b == 0){
        return 1;
    }
    int smallans =  fastPower(a,b/2);
    smallans *= smallans;
    if(b&1){
        return a*smallans;
    }
    else{
        return smallans;
    }
}
int mul(int a, int b){
    if(b<0){
        b = -1*b;
    }
    if(b == 0){
        return 0;
    }
    return a+mul(a,b-1);
}

int stringToNumber(char input[], int last){
	//Base Case
	if(last == 0){
		return input[last] - '0';
	}
	//Recursive Call
	int smallAns = stringToNumber(input,last-1);
	int a = input[last] - '0';
	return smallAns * 10 + a;
}
string num[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void print(int n){
    if(n == 0){
        return;
    }
    print(n/10);
    cout<<num[n%10]<<" ";
}
int linearS(int arr[], int n,int key, int i = 0){
if(n==i){
    return -1;
}
if(arr[i] == key){
    return i;
}
linearS(arr, n-1, key, i+1);
}
int binaryS(int arr[], int l, int r, int key){
    if(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == key)
            return mid;
        if(key<arr[mid])
            return binaryS(arr, l, mid-1, key);
        else return binaryS(arr, mid+1, r, key);
    }
    return -1;
}
int main(){
    int arr[] = {0, 1, 2, 3, 4};
    cout<<binaryS(arr,0,4,1);
}
