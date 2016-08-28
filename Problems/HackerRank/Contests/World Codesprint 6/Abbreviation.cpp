/*
 - Hackerrank World CodeSprint 6
    - Abbreviation
 
 https://www.hackerrank.com/contests/world-codesprint-6/challenges/abbr
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string s1,s2;
int t;
vector<char> s1_uppers;
bool was[1001];
int main() {
    
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        for(int i = 0; i < s1.size() ; ++i){
            if(isupper(s1[i])) s1_uppers.push_back(s1[i]);
            s1[i] = toupper(s1[i]);
        }
        bool check, NOO = true;
        memset(was, false, sizeof was);
        for(vector<char>::iterator it = s1_uppers.begin(); it != s1_uppers.end(); ++it){
            check = true;
            for(int i = 0; i < s2.size() ; ++i){
                //cout << s2[i] << " " << *it << endl;
                if(s2[i] == *it && !was[i]){
                    check = false;
                    was[i] = true;
                    //cout << endl;
                    break;
                }
                
            }
            if(check){
                NOO = false;
                break;
            }
        }
        
        int m = 0;
        int i = 0;
        for(int j = 0 ; j < s1.size() ; ++j){
            if(s1[j] == s2[i]){
                i++;
                if(i == s2.size()) break;
            }
        }
        
        if(i == s2.size() && NOO) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        s1_uppers.clear();
        s1.clear();
        
    }
    
    return 0;
}