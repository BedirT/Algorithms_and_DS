#include<iostream>
#include<cmath>
using namespace std;
long long n, x, m, t;
string s, s2;
int main (){
    
    cin >> t;
    while (t--) {
        cin >> n >> m;
        
        long double result = (long double)(m)/(long double)(m+1) - (long double)(n-1)/(long double)(n);
        printf("%.9Lf\n", result);
    }
}