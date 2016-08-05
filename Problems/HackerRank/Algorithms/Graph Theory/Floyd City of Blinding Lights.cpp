// https://www.hackerrank.com/challenges/floyd-city-of-blinding-lights/copy-from/24376815
#include<iostream>
#include<vector>
#define INF 999999
using namespace std;
int arr[405][405];
int main () {
    
    int n, m;
    // Given a dataset
    cin >> n >> m; // Node, way
    
    for (int i = 0; i <= n+1; ++i)
        for (int j = 0; j <= n+1; ++j)
            arr[i][j] = INF;
    
    for (int i = 0; i < m; ++i) {
        int a, b, c;
        //cin >> a >> b >> c;
        scanf("%d%d%d", &a, &b, &c);
        arr[a][b] = c;
    }
    
    
    // Algo
    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            if (arr[i][k])
                for (int j = 1; j <= n; ++j)
                    if ( arr[k][j] && i != j )
                        if (arr[i][j] > arr[i][k] + arr[k][j])
                            arr[i][j] = arr[i][k] + arr[k][j];
    //
    
    int t;
    cin >> t;
    while(t--){
        // Distance between st - fin
        int st, fin;
        cin >> st >> fin;
        if(st == fin) // cout << "0" << endl;
            printf("0\n");
        else if(arr[st][fin] >= INF) // cout << "-1" << endl;
            printf("-1\n");
        else // cout << arr[st][fin] << endl;
            printf("%d\n", arr[st][fin]);
    }
    
}
