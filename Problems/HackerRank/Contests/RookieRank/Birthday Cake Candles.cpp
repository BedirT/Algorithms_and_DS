//https://www.hackerrank.com/contests/rookierank/challenges/birthday-cake-candles
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, mm, max = 0, count= 0;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        int a ;
        cin >> a;
        if(a >= max){
            mm = a;
            if(mm != max)count = 0;
            max = a;
            count++;
        }
    }
    cout << count;
    
    return 0;
}

