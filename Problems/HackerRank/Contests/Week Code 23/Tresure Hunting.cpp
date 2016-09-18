#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    
    double a,b,x,y;
    double k,t;
    
    cin >> x >> y >> a >> b;
    
    k = (a*y-b*x)/(a*a+b*b);
    t = (x+b*k)/a;
    cout << fixed;
    cout << setprecision(12) << t << endl << setprecision(12) << k;
    
    return 0;
}

