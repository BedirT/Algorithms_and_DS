#include<iostream>
#define INF 999999 // Large number to define infinity
using namespace std;
int main () {
    
    int n, m;
    // Given a dataset
    cin >> n >> m; // Node, way
    
    int arr[n][n];
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            arr[i][j] = INF;
    
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        arr[b][a] = arr[a][b] = c; // Undirected
    }
    
    // Algorithm
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if ( i != j )
                    if (arr[i][j] > arr[i][k] + arr[k][j])
                        arr[i][j] = arr[i][k] + arr[k][j];
  
    // Distance between start - finish
    int st, fin;
    cin >> st >> fin;
    cout << arr[st][fin] << endl;
    
}
