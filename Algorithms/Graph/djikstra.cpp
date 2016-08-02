#include<iostream>
#include<cstring>
#define inf 0x7fffffff
using namespace std;

int main () {
    
    int n, m, s, a, b, k;
    cin >> n >> m;
    int arr[n+1][n+1];
    bool was[n+1];
    int d[n+1];
    
    for (int i = 0; i <= n; ++i) {
        d[i] = inf;
        was[i] = false;
    }
    
    memset(arr, -1, sizeof arr);
    
    for(int i = 0; i < m ; ++i){
        cin >> a >> b >> k;
        arr[a][b] = k;
    }
    cin >> s;
    
    d[s] = 0;
    
    int ct = n;
    while(ct--){
        
        for(int i = 0 ; i < n ; ++i)
            if (arr[s][i] != -1 && d[i] > d[s] + arr[s][i])
                d[i] = d[s] + arr[s][i];
        
        was[s] = true;
        int min = inf;
        for (int i = 0; i < n ; ++i)
            if ( min > d[i] && !was[i]){
                min = d[i];
                s = i;
            }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << d[i] << " " ;
    }cout << endl;
    
}