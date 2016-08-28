/*
 - Hackerrank World CodeSprint 6
    - Beautiful 3 Set
 
 https://www.hackerrank.com/contests/world-codesprint-6/challenges/beautiful-3-set
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n, z;
int counterX[301], counterY[301], counterZ[301];
int arr[301][3];
int main() {
    
    cin >> n;
    int ans = 0;
    for(int i = 0 ; i <= n ; ++i){
        for(int j = n-1 ; j >= 0 ; --j){
            z = n-i-j;
            //cout << i << " " << j << " " << z << endl;
            if(!counterX[i] && !counterY[j] && !counterZ[z] && z >= 0){
                counterX[i] = 1;
                counterY[j] = 1;
                counterZ[z] = 1;
                arr[ans][0] = i;
                arr[ans][1] = j;
                arr[ans++][2] = z;
            }
        }
    }
    
    cout << ans << endl;
    for(int i = 0 ; i < ans ; ++i){
        for(int j = 0 ; j < 3 ; ++j){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    
    return 0;
}


