#include <iostream>
#include <cstring>
using namespace std;
int t;
long long a, b, k;

long long cellsv[10000001];
bool cellsw[10000001];

void primes(long long n){
    
    memset(cellsw, true, sizeof cellsw);
    long long i,j;
    for (i = 2; i <= n; i++)
        if (cellsw[i]){
            for (j = i; j <= n ; j+=i ){
                cellsw[j] = false;
                cellsv[j]++;
            }
        }
    
}

int main()
{
    cin >> t;
    primes(10000001);
    int ct = t;
    while (t--) {
        scanf("%lld %lld %lld", &a, &b, &k);
//        cin >> a >> b >> k;
        long long counter = 0;
        for (long long i = a; i <= b; ++i) {
            if (cellsv[i] == k) {
                counter++;
            }
        }
        printf("Case #%d: %lld\n", ct-t, counter);
//        cout << "Case #" << ct - t << ": " << counter << endl;
    }
}