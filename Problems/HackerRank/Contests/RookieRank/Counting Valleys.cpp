//https://www.hackerrank.com/contests/rookierank/challenges/counting-valleys
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int place = 0;
    bool was = true;
    int valley = 0;
    for(int i = 0 ; i < n ; ++i){
        char a;
        cin >> a;
        if(a == 'U'){
            place++;
        }else if(a == 'D'){
            place--;
        }
        if(place < 0 && was){
            valley++;
            was = false;
        }if(place >= 0){
            was = true;
        }
    }
    cout << valley;
    
    return 0;
}

