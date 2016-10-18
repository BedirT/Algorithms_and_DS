// Bottom up

#include <iostream>
using namespace std;

int knapsack(int c, int * w, int * val, int n){
    int d[n+1][c+1];
    for (int i = 0 ; i <= n ; ++i)
        for (int j = 0 ; j <= c ; ++j){
            if (i==0 || j==0)
                d[i][j] = 0;
            else if(w[i-1] <= j)
                d[i][j] = max(val[i-1] + d[i-1][j-w[i-1]], d[i-1][j]);
            else
                d[i][j] = d[i-1][j];
        }

    return d[n][c];
}

int main (){

    int n, c;
    cin >> n; // Size
    int w[n+1], val[n+1];

    for(int i = 0 ; i < n; ++i) cin >> w[i]; // Weights
    for(int i = 0 ; i < n; ++i) cin >> val[i]; // Values

    cin >> c; // Capacity

    cout << knapsack(c, w, val, n) << endl;

}
