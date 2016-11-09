/*
ID: bedir.t1
PROG: friday
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

int ms[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int week[8] = {0,0,0,0,0,0,0,0};

bool isleap(int a){
    if(a % 100 == 0){
        if(a % 400 == 0) return true;
        else return false;
    }
    else if(a % 4 == 0) return true;
    else return false;
}

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    
    int n;
    fin >> n;
    int curday = 0;
    for(int i = 0; i < n; ++i){
        if(isleap(i+1900)) ms[1] = 29;
        else ms[1] = 28;
        //cout << ms[1] << endl;
        for(int j = 0; j < 12 ; ++j){
            //for(int k = 0; k < ms[i] ; ++k) cout << (curday+k) % 7 << " ";
            curday = (curday + 6) % 7;
            //cout << endl << curday << " ";
            week[curday]++;
            curday = (curday + ms[j] - 6) % 7;
        }
    }
    fout << week[6] << " ";
    for (int i = 0; i < 6; ++i)
        fout << week[i] << " ";
    fout << endl;
    return 0;
}