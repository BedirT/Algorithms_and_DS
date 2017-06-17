#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
double r, R, h;
int main (){
    int t;
    cin >> t;
    while(t--) {
        long long n;
        scanf("%lld", &n);
        long long i = 2, ok = 0;
        if(n>1)
        while (true) {
            if (n%i!=0) {
                ok = 1;
                break;
            }
            while (n%i==0)
                n/=i;
            ++i;
            if (n==1)
                break;
        }
        if (ok==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
}