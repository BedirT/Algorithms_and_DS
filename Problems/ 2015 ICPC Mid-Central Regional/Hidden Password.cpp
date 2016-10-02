/*
 https://open.kattis.com/contests/auzbx7/problems/hidden
 */
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
string s1, s2;
int main () {

    cin >> s1 >> s2;
    for(int i = 0 ; i < s2.size(); ++i){
        
        if(s2[i] == s1[0])
            s1.erase(0,1);
        else{
            for (int k = 0 ; k < s1.size(); ++k) {
                if(s2[i] == s1[k]){
                    cout << "FAIL" << endl;
                    exit(0);
                }
            }
        }
        //cout << s1 << endl;
        
    }
    if(s1 == "")
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;
    
}