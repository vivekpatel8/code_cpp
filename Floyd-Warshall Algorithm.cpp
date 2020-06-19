#include<bits/stdc++.h>
using namespace std;
#define INF 9999
void Floyd_Warshall_Algo(int graph[4][4]){
int n = 4;
for(int k = 0;k<n;k++){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            graph[i][j] = min(graph[i][k] + graph[k][j] , graph[i][j]);
        }
    }
}
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(graph[i][j] == INF)cout<<"IN"<<" ";
            else cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int graph[4][4] = { {0, 5, INF, 10},
                        {INF, 0, 3, INF},
                        {INF, INF, 0, 1},
                        {INF, INF, INF, 0}
                       };
    Floyd_Warshall_Algo(graph);
}
