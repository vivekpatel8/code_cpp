#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int x[n], y[n];
for(int i = 0;i<n;i++){
    cin>>x[i]>>y[i];
}
sort(x, x+n);
sort(y ,y+n);
int dx = x[0] - 1;
int dy = y[0] - 1;
for(int i = 1;i<n;i++){
    dx = max(dx, x[i] - x[i -1] - 1);
    dy = max(dy, y[i] - y[i -1] - 1);
}
cout<<dx*dy;
}



/*
A religious king wants to build the largest temple in his kingdom . To build the largest temple he needs to find the area of the largest suitable land . Given co-ordinates which denotes rivers flowing through the point horizontally as well as vertically , find the largest area possible to make the grand temple.
Consider 2 rivers flowing across x-axis as well as y-axis. The temple must be enclosed by rivers on all 4 sides. pic

Input Format
An integer n denoting number of co-ordinates followed by n co-ordinates

Constraints
1 <= N <= 10^5
| Ai | <= 10^9

Output Format
Largest possible area to build the grand temple

Sample Input
3
1 1
2 4
5 2
Sample Output
2
Explanation
Area between (2,2), (2,4), (5,2), (5,4)
(For the largest possible region found the area will be calculated from the edge next to the left edge, the edge above the bottom edge, the topmost edge and the rightmost edge i.e for the region (2,2) , (2,4) , (5,2) , (5,4) the actual area will be considered from (3,2), (3,4), (5,2), (5,4) respectively. Try to draw the diagram and you will realize the modified picture of the area)
*/
