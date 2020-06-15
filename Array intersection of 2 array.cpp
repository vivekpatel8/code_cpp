#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int * a = new int[n];
    int * b = new int[n];
    unordered_map <int, int> hash_a;
    multiset <int> ans;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        hash_a[a[i]]++;
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
        if(hash_a[b[i]] > 0){
            ans.insert(b[i]);
            hash_a[b[i]]--;
        }
    }
    cout<<"[";
    int k = ans.size();
    for(auto x : ans){
        if(k > 1){
        cout<<x<<", ";}
        else{
        cout<<x;}
        k--;
    }
    cout<<"]";

}

/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take N more inputs and store that in another array. Write a function which gives the intersection of two arrays in an ArrayList of integers and Print the ArrayList.

Input Format
First line contains N denoting the size of the two arrays. Second line contains N space separated integers denoting the elements of the first array. Third line contains N space separated integers denoting the elements of the second array.

Constraints
Length of Arrays should be between 1 to 100000.

Output Format
Display the repeating elements in a comma separated manner enclosed in square brackets. The numbers should be sorted in increasing order.

Sample Input
7
1 2 3 1 2 4 1
2 1 3 1 5 2 2
Sample Output
[1, 1, 2, 2, 3]
Explanation
Check which integer is present in both the arrays and add them in an array .Print this array as the ans.
*/
