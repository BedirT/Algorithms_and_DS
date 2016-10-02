/*
 https://open.kattis.com/contests/auzbx7/problems/growlinggears
 */
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int t, n;
int a ,b ,c;
int main () {

    cin >> t;
    while (t--) {
        cin >> n;
        int res = 0;
        int maxx = -9999999;
        for(int i = 1; i <= n; ++i){
            cin >> a >> b >> c;
            if(res == 0 || maxx < ((4*a*c) + (b*b))/(4*a)){
                maxx = ((4*a*c) + (b*b))/(4*a);
                //cout << max << endl;
                res = i;
            }
        }
        cout << res << endl;
    }
}