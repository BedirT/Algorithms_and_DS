//https://www.hackerrank.com/contests/rookierank/challenges/magic-square-forming
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[4][4];
int main() {
    int m = 99999;
    int matrix1[8][3][3] ={{{4,9,2},
        {3,5,7},
        {8,1,6}},
        {{8,1,6},
            {3,5,7},
            {4,9,2}},
        {{2,7,6},
            {9,5,1},
            {4,3,8}},
        {{8,3,4},
            {1,5,9},
            {6,7,2}},
        {{4,3,8},
            {9,5,1},
            {2,7,6}},
        {{6,7,2},
            {1,5,9},
            {8,3,4}},
        {{6,1,8},
            {7,5,3},
            {2,9,4}},
        {{2,9,4},
            {7,5,3},
            {6,1,8}}
    };
    
    for(int i= 0 ; i < 3 ; ++i){
        for(int j= 0 ; j < 3 ; ++j){
            cin >> arr[i][j];
        }
    }
    int dif, holdK;
    for(int k = 0 ; k < 8 ; ++k){
        dif = 0;
        for(int i= 0 ; i < 3 ; ++i){
            for(int j= 0 ; j < 3 ; ++j){
                if(arr[i][j] != matrix1[k][i][j]){
                    dif += abs(matrix1[k][i][j] - arr[i][j]);
                }
            }
        }
        if(dif < m){
            m = dif;
        }
    }
    cout << m;
    
    
    return 0;
}

