#include <iostream>
#include <climits>
using namespace std;
int g[101][101],used[101],d[101],dT[101],t[101];

int main ()
{
    int n,m;
    int i,j,a,b,x;
    int min,current;
    
    cin >> n;
    //  int g[n+1][n+1],used[n+1],d[n+1],dT[n+1],t[n+1];
    for (i=1; i<=n; i++) {
        cin >> t[i];
        //  dT[i] = t[i];
    }
    cin >> m;
    for (i=0; i<m; ++i) {
        cin >> a >> b >> x;
        g[a][b] = g[b][a] = x;
    }
    
    dT[1] = t[1];
    current = 1;
    d[1] = 0;
    used[current] = 1;
    for (i=0; i<n; ++i) {
        for (j=1; j<=n; ++j) {
            if (g[current][j] && !used[j]) {
                if (!d[j]) {
                    d[j] = d[current]+g[current][j];
                    dT[j] = dT[current]+t[j];
                }
                else if (d[j] >= d[current]+g[current][j]) {
                    d[j] = d[current]+g[current][j];
                    dT[j] = max (dT[j], dT[current]+t[j]);
                }
                //cout << dT[j] << " " ;
            }
        }
        min = INT_MAX;
        for (j=1; j<=n; ++j) {
            if (d[j] && !used[j])
                if (d[j] < min) {
                    current = j;
                    min = d[j];
                }
        }
        used[current] = 1;
    }
    if (d[n])
        cout << d[n] << " " << dT[n];
    else
        cout << "impossible";
    return 0;
}