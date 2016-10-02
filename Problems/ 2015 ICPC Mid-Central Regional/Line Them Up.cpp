/*
 https://open.kattis.com/contests/auzbx7/problems/lineup
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int main () {

    cin >> n;
    vector<string> s(n);
    vector<string> old(n);
    for (int i = 0 ; i < n; ++i) {
        cin >> s[i];
        old[i] = s[i];
    }
    sort(s.begin(), s.end());
    bool inc = true, dec = true;
    for (int i = 0 ; i < n; ++i) {
        if(s[i] != old[i]){
            inc = false;
            break;
        }
        
    }
    for (int i = 0 ; i < n; ++i) {
        if(s[n-i-1] != old[i]){
            dec = false;
            break;
        }
    }
    
    if(!dec && !inc){
        cout << "NEITHER\n";
    }else if(dec){
        cout << "DECREASING\n";
    }else
        cout << "INCREASING\n";
}