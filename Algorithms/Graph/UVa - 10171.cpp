#include <iostream>
#include <vector>
#include <fstream>
#define maxN 101
#define inf 0xfffffff
using namespace std;
vector<pair<int, int> > city[maxN];
int d[maxN];

void fordBellman(int s, int n){ // Starting point - s
    
    for(int i = 0; i < n; ++i) d[i] = inf;

    d[s] = 0;

    vector<pair<int,int> >::iterator it;
    for(int i = 0; i < n - 1; ++i) // n-1 iteration, we are checking for improvements in graph
        for(int j = 0; j < n; ++j) // n iteration for 
            for(it = city[j].begin(); it != city[j].end() ; ++it){
                int k = (*it).first; // cost
                int dest = (*it).second; // destination city
                d[dest] = min(d[dest], d[j] + k);
            }
}

int main(){
    
    int n, m, a, b, k;
    cin >> n >> m; // M edges, N nodes

    for(int i = 0; i < m; ++i){
        cin >> a >> b >> k;
        city[a].push_back(make_pair(k, b));
        // City 'a' is connected to 'b' with distance/cost 'k'
    }
    
    int s;
    cin >> s; // starting point

    fordBellman(s, n);

    printf("FORD BELLMAN ALGORITHM\n");
    printf("Point %d's distance to everyother node:\n", s);
    printf("Node\tDistance\n");
    for(int i = 0; i < n; ++i)
        printf("%d\t%d\n", i, d[i]);

}