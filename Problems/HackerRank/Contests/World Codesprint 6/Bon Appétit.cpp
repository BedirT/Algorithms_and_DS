/*
 - Hackerrank World CodeSprint 6
    - Bon Appétit
 
 https://www.hackerrank.com/contests/world-codesprint-6/challenges/bon-appetit
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n, k, paid;

int main() {
    
    cin >> n >> k;
    int arr[n];
    int res = 0;
    for(int i = 0; i < n ; ++i){
        cin >> arr[i];
        if(i == k);
        else res += arr[i];
    }
    res /= 2;
    cin >> paid;
    
    if(res == paid) cout << "Bon Appetit" << endl;
    else cout << paid-res << endl;
    
    
    return 0;
}