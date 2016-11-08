/*
ID: bedir.t1
PROG: ride
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    long long val1 = 1, val2 = 1;
    string a, b;
    fin >> a >> b;
    for(int i = 0 ; i < a.size() ; ++i) 
        val1 *= (a[i] - 'A' + 1);
    for(int i = 0 ; i < b.size() ; ++i) 
        val2 *= (b[i] - 'A' + 1);

    if(val1 % 47 == val2 % 47) fout << "GO" << endl;
    else fout << "STAY" << endl;
    return 0;
}