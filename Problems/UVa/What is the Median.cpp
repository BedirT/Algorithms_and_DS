/*
    Name: 10107 - What is the Median?
    Link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1048
    Judge: UVa
    Topic: Combinatorics
    Algo Used: sort
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main (){

    vector<long> vc;
    long a;
    while(cin >> a){
        vc.push_back(a);
        sort(vc.begin(), vc.end());
        int n = vc.size();
        if (n % 2 == 1)
            cout << vc[n/2] << endl;
        else
            cout << (int)((vc[(n/2)] + vc[n/2-1])/2) << endl;
    }

}
