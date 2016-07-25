#include<iostream>
#include<vector>
#include<cstring>
#define inf 100001
using namespace std;

int main () {

    int n, m;
    cin >> n >> m; // node & way
    
    int d[n];
    int adj[n][n];
    for (int i = 1; i <= n; ++i) {
        d[i] = inf;
        for (int j = 1; j <= n; ++j) {
            adj[i][j] = 0;
        }
    }
    
    for (int i = 1; i <= m ; ++i) {
        int a, b, c;
        cin >> a >> b >> c; // from a to b -> length = c
        adj[a][b] = c;
        adj[b][a] = c;
    }
    int curr;
    
    // Starting Point
    cin >> curr;
    
    d[curr] = 0;
    
    int min, holder;
    bool was[n];
    memset(was, false, sizeof was);
    
    // HATALI KISIM /////////////
    for(int j = 1 ; j <= n ; ++j){
        was[curr] = true;
        min = inf;
        for(int i = 1 ; i <= n ; ++i){
            // Probably here
            if( adj[curr][i] != 0 && d[curr] + adj[curr][i] < d[i] )
                d[i] = d[curr] + adj[curr][i];
            if(!was[i] && d[i] < min) {
                min = d[i];
                holder = i;
            }
        }
        curr = holder;
        
    }////////////////////////////
    
    for(int i = 1 ; i <= n ; ++i)
        cout << d[i] << " ";
    cout << endl;
    
}