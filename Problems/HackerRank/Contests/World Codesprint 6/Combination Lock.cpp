/*
 - Hackerrank World CodeSprint 6
    - Combination Lock
 
 https://www.hackerrank.com/contests/world-codesprint-6/challenges/combination-lock
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int ord[5], ord2[5], diff;

int main() {
    
    for(int i = 0 ; i < 5 ; ++i)
        cin >> ord[i];
    for(int i = 0 ; i < 5 ; ++i)
        cin >> ord2[i];
    
    int res = 0;
    int diff;
    for(int i = 0 ; i < 5 ; ++i){
        diff = abs(ord[i] - ord2[i]);
        //cout << diff << " " << 9-diff << " " << endl;
        res += min(10-diff, diff);
    }
    
    cout << res << endl;
    
    return 0;
}

