#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int t, n;

int main() {
    
    cin >> t;
    while(t--){
        cin >> n;
        if(n % 2 == 1) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    
    return 0;
}

