//https://www.hackerrank.com/challenges/vector-erase

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> adj;
    for(int i = 0 ; i < n ; ++i){
        int a;
        cin >> a;
        adj.push_back(a);
    }
    int m, f ,k;
    cin >> m >> f >> k;
    adj.erase(adj.begin() + m - 1);
    adj.erase(adj.begin() + f - 1, adj.begin() + k - 1 );
    n = n - (k - f) - 1;
    cout << n << endl;
    for(int i = 0 ; i < n ; ++i)
        cout << adj[i] << " ";
    cout << endl;
    return 0;
}