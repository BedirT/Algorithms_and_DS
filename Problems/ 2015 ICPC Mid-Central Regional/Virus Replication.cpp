#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
string s1, s2;
int main () {

    cin >> s1 >> s2;
    while((s1.size() && s1.size() ) && s1[0] == s2[0]){
        s2.erase(0,1);
        s1.erase(0,1);
    }
    while((s1.size() && s1.size() ) && s1[s1.size()-1] == s2[s2.size()-1]){
        s2.erase(s2.size()-1,s2.size());
        s1.erase(s1.size()-1,s1.size());
    }
    
    cout << s2.size() << endl;
    
}