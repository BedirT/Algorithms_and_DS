//https://www.hackerrank.com/contests/rookierank/challenges/extremely-dangerous-virus
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long int a,b,t,x,res=1;
    unsigned int M = 1000000007;
    
    scanf ("%llu %llu %llu", &a, &b, &t);
    x = (a+b)/2;
    while (t > 0) {
        if (t%2)
            res = (res*x)%M;
        t = t/2;
        x = (x*x)%M;
    }
    printf ("%llu",res);
    
    return 0;
    
}