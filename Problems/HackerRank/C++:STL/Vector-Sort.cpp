// https://www.hackerrank.com/challenges/vector-sort
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
    sort(adj.begin(), adj.end());
    
    for(int i = 0 ; i < n ; ++i)
        cout << adj[i] << " ";
    cout << endl;
    return 0;
}

