#include <iostream>
#include <algorithm>
using namespace std;

void sieveOfE(bool was, long n){
    
    long i,j;
    
    for (i = 2; i*i <= n; i++)
        if (!was[i])
            for (j = i*i; j <= n ; j+=i )
                was[j] = true;
    
    // For Printing
    // for (i = 2; i <= n; i++)
    //     if (was[i])
    //         cout << i << " ";
    
}

int main() {
    
    long n;
    cin >> n; // The limit for us to search prime numbers
    bool was[n];
    sieveOfE(was, n);
    for(int i = 0; i < n; ++i){
        if(was[i]){
            sum += i;
            if(sum >= 2000000000) {
                break;
            }
        }
    }
    cout << sum << endl;
    
}