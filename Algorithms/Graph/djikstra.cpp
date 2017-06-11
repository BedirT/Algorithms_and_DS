#include <iostream>
#include <vector>
#include <cstring>
#define INF 0xfffffff
#define maxN 101 // Maximum number of nodes
using namespace std;

void djikstra(int n, int s, int end, int ar[maxN][maxN], int * d){
    // THE NODES USED ARE 1 INDEXED (NUMBERED FROM 1-N)...
    // Initializing the variables
    bool visited[maxN];
    for(int i = 0; i <= n; ++i) d[i] = INF, visited[i] = false;
    d[s] = 0; 

    for(int ct = 0; ct < n ; ++ct){
        for(int i = 1; i <= n; ++i)
            if(ar[s][i] != -1 && d[i] > d[s] + ar[s][i])
                d[i] = d[s] + ar[s][i];
            
        visited[s] = true;

        int mn = INF;
        for(int i = 1; i <= n; ++i)
            if(mn > d[i] && !visited[i])
                mn = d[i], s = i;   // continue from minimum that
    }                               // isn't visited

    for(int i = 1; i <= n; ++i){
        printf("%d ", d[i]);
    }printf("\n");
}

int main () {
    int t, n, e, m;
    int ar[maxN][maxN], d[maxN];

    scanf("%d", &t); // Testcases
    while(t--){
        scanf("%d %d %d", &n, &e, &m);

        memset(ar, -1, sizeof ar);

        for(int i = 0, a, b, w; i < m; ++i){
            scanf("%d %d %d", &a, &b, &w);
            ar[a][b] = w;
        }

        // s: starting point, e: ending point, n: number of nodes
        djikstra(n, s, e);

    }
}