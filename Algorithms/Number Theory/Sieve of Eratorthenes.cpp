#include<iostream>
#include<algorithm>
using namespace std;

void sieveOfE(int n){
    
    int i,j;
    bool was[n];
    memset(was, true, sizeof(was));
    
    for (i = 2; i*i <= n; i++)
        if (was[i])
            for (j = i*i; j <= n ; j+=i )
                was[j] = false;
    
    for (i = 2; i <= n; i++)
        if (was[i])
            cout << i << " ";
    
}

int main() {
    
    int n;
    cin >> n; // The limit for us to search prime numbers
    
    sieveOfE(n);
    
}