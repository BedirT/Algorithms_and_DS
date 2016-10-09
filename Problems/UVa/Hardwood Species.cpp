/*
    Name: 10226 - Hardwood Species
    Link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1167
    Judge: UVa
    Topic: Trees
    Algo Used: map, set (BST)
*/
#include <iostream>
#include <map>
#include <set>
#include <iomanip>
using namespace std;
int t;
string s;
int main () {

    cin >> t;
    map<string, int> mpp;
    set<string> vc;
    getline(cin,s);
    getline(cin,s);
    while (t--) {
        int counter=0;
        while (getline(cin,s) && s != "") {
            mpp[s]++;
            vc.insert(s);
            counter++;
        }
        for (set<string>::iterator it = vc.begin(); it != vc.end() ;++it){
            cout << *it << " " << fixed << setprecision(4) << ((double)mpp[*it]/counter)*100.0 << endl;
        }
        if(t>0) cout << endl;
        vc.clear();
        mpp.clear();
    }

}
