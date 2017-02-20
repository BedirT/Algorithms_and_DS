//http://www.spoj.com/problems/TRVCOST/
#include<iostream>
#include<cstring>
#define inf 9999
int arr[501][501];
int d[501];
bool was[501];
using namespace std;
int main (){
    
    int n, a, b, w, u, q, v;
    cin >> n;
    
    for(int i = 0; i < 500 ; ++i){
        d[i] = inf;
        was[i] = false;
    }
    
    memset(arr, -1 , sizeof arr);
    
    for(int i = 0; i < n; ++i){
        cin >> a >> b >> w;
        if(arr[a][b] > w || arr[a][b] == -1){
            arr[a][b] = w;
            arr[b][a] = w;
        }
    }
    
    cin >> u; //  s
    
    d[u] = 0;
    int ct = n;
    
    while (ct--) {
        
        for (int i = 0; i < 500; ++i)
            if(arr[u][i] != -1 && d[i] > d[u] + arr[u][i])
                d[i] = d[u] + arr[u][i];
        
        was[u] = true;
        int min = inf;
        
        for (int i = 0; i < 500; ++i)
            if(min > d[i] && !was[i]){
                min = d[i];
                u = i;
            }
        
    }
    
    cin >> q;
    
    for(int i = 0 ; i < q; ++i){
        cin >> v;
        if(d[v] != inf) cout << d[v] << endl;
        else cout << "NO PATH" << endl;
    }
    
}
