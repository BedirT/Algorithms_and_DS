/*
    Name: 146 - ID Codes
    Link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=82
    Judge: UVa
    Topic: Combinatorics
    Algo Used: next_permutation
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main (){

    string s;

    while(1){
        cin >> s;
        string s2 = s;
        next_permutation(s.begin(), s.end());
        if (s == "#") break;
        if (s == s2 || lexicographical_compare(s.begin(),s.end(),s2.begin(),s2.end()))    cout << "No Successor" << endl;
        else            cout << s << endl;
    }

}
