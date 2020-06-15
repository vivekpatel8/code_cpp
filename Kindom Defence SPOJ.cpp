#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int w, h, n;
    cin>>w>>h>>n;
    int x[n], y[n];
    for(int i = 0 ;i<n;i++){
        cin>>x[i];
        cin>>y[i];
    }
    sort(x, x+n);
    sort(y, y+n);
    int dx = x[0] - 1 , dy = y[0] - 1;
    for(int i = 0;i<n;i++){
        dx = max(dx, x[i] - x[i-1] - 1);
        dy = max(dy, y[i] - y[i-1] - 1);
    }
    dx = max(dx,w - x[n-1]);
    dy = max(dy,h - y[n-1]);
    cout<<dx*dy<<endl;
}

}
/*

DEFKIN - Defense of a Kingdom
no tags
Theodore implements a new strategy game “Defense of a Kingdom”. On each level a player defends the Kingdom that is represented by a rectangular grid of cells. The player builds crossbow towers in some cells of the grid. The tower defends all the cells in the same row and the same column. No two towers share a row or a column.

The penalty of the position is the number of cells in the largest undefended rectangle. For example, the position shown on the picture has penalty 12.

This position has a penalty of 12.

Help Theodore write a program that calculates the penalty of the given position.

Input
The first line of the input file contains the number of test cases.

Each test case consists of a line with three integer numbers: w — width of the grid, h — height of the grid and n — number of crossbow towers (1 ≤ w, h ≤ 40 000; 0 ≤ n ≤ min(w, h)).

Each of the following n lines contains two integer numbers xi and yi — the coordinates of the cell occupied by a tower (1 ≤ xi ≤ w; 1 ≤ yi ≤ h).

Output
For each test case, output a single integer number — the number of cells in the largest rectangle that is not defended by the towers.

Example
Input:
1
15 8 3
3 8
11 2
8 6

Output:
12
*/
