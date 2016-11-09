/*
ID: bedir.t1
PROG: gift1
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
// #define fin cin
// #define fout cout

using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int n, k, t;
    string s;
    map<string, int> m;
    vector<string> vc;
    fin >> n;
    for(int i = 0; i < n ; ++i){
        fin >> s;
        vc.push_back(s);
    }
    for(int i = 0; i < n ; ++i){
        fin >> s >> k >> t;
        if(t){
            m[s] -= k;
            m[s] += k%t;
            for(int j = 0; j < t; ++j){
                fin >> s;
                m[s] += k/t;
            }
        }
    }
    for(int i = 0; i < vc.size(); ++i)
        fout << vc[i] << " " << m[vc[i]] << endl;
    return 0;
}