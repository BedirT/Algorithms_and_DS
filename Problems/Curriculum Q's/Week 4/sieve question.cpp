// https://wiki.haskell.org/99_questions/Solutions/39
// Application Of Sieve of Eratosthenes

#include<iostream>
using namespace std;

void sieve (int l, int h){
    
    int j,i;
    int array[h];
    bool was[h];
    memset(was, true , sizeof(was));
    
    for (i = 2 ; i <= h ; ++i) {
        if (was[i]){
            for (j = i*i; j <= h; j += i) {
                was[j] = false;
            }
        }
    }
    
    for (i = i; i <= h ; ++i ) {
        if (was[i]) cout << i << endl ;
    }
    
}

int main () {

    int l, h; // Upper and Lower Limits
    
    // Enter Lower limit and then Upper limit
    cin >> l >> h;
    
    sieve(l, h);
    
}
