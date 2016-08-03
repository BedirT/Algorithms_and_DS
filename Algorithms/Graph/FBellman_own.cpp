#include<iostream>
#include<cstring>
#define inf 99999
using namespace std;

struct node {
    int cost, from;
    bool was;
};

int main () {
    
    int n, m, c, b, k, s, ct, cur;
    cin >> n >> m;
    node a[n];
    int arr[n][n];
    
    for (int i = 0; i < n; ++i) {
        a[i].cost = inf;
        a[i].from = 0;
        a[i].was = false;
        for (int j = 0 ; j < n ; ++j)
            arr[i][j] = inf;
    }
    
    for (int i = 0; i < m; ++i) {
        cin >> c >> b >> k;
        arr[c][b] = k;
    }
    
    cin >> s;
    a[s].cost = 0;
    
    ct = n - 1;
    while (ct--) {
        
        int min = inf;
        for (int i = 0; i < n; ++i)
            if(min > a[i].cost && !a[i].was){
                min = a[i].cost;
                cur = i;
            }
        
        for (int i = 0; i < n; ++i)
            if(a[i].cost > a[cur].cost + arr[cur][i]){
                a[i].cost = a[cur].cost + arr[cur][i];
                a[i].from = cur;
            }
        
        a[cur].was = true;
    }
    
    cout << "Cost\tSource Node" << endl;
    for (int i = 0; i < n; ++i)
        cout << a[i].cost << "\t" << a[i].from << endl;
    
}