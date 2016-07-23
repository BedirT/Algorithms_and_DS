// https://www.hackerrank.com/challenges/cpp-lower-bound
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n ;
    vector<int> adj;
    for(int i = 0 ; i < n ; ++i){
        int a;
        cin >> a;
        adj.push_back(a);
    }
    int q;
    cin >> q;
    while(q--){
        
        int m;
        cin >> m;
        vector<int>::iterator low,up;
        low = lower_bound (adj.begin(), adj.end(), m);
        up = upper_bound (adj.begin(), adj.end(), m);
        if(adj[low - adj.begin()] == m){
            cout << "Yes " << low - adj.begin() + 1;
        }else{
            cout << "No ";
            cout << up - adj.begin() + 1;
        }cout << endl;
        
    }
    
    
    return 0;
}

