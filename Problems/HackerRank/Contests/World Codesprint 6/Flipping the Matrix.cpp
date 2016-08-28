/*
 - Hackerrank World CodeSprint 6
    - Flipping the Matrix
 
 https://www.hackerrank.com/contests/world-codesprint-6/challenges/flipping-the-matrix
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int t, n, a;
int main() {
    
    cin >> t;
    while(t--){
        cin >> n;
        int arr[2*n][2*n];
        for(int i = 0; i < 2*n; ++i){
            for(int j = 0; j < 2*n; ++j){
                cin >> a;
                arr[i][j] = a;
            }
        }
        int m = 5;
        while(m--)
            for(int i = 0; i < n; ++i)
                for(int j = 0; j < n; ++j){
                    arr[i][j] = max(arr[i][j], max(arr[2*n-1-i][j], max(arr[i][2*n-1-j], arr[2*n-1-i][2*n-1-j])));
                }
        
        
        int res = 0;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                res += arr[i][j];
        
        cout << res << endl;
    }
    
    return 0;
}