#include <iostream>
#include <climits>
using namespace std;
int g[101][101],used[101],d[101],dT[101],t[101];

int main ()
{
    string s;
    cin >> s;
    int forward = 0, backward = 0;
    for(int i = 0 ; i < s.size() ; ++i){
        if (s[i] == '('){
            forward++;
        }else
            backward++;
    }
    for(int i = 0 ; i < s.size() ; ++i){
        if (s[i] == '(')
            for (int j = i; j < s.size(); ++j) {
                if (s[j] == ')'){
                    backward--;
                    forward--;
                    s[j] = '.';
                    s[i] = '.';
                    break;
                }
            }
        else
            for (int j = 0; j < i; ++j) {
                if (s[j] == '('){
                    backward--;
                    forward--;
                    s[j] = '.';
                    s[i] = '.';
                    break;
                }
            }
    }
    bool ok = true;
    for(int i = 0 ; i < s.size() ; ++i){
        if (s[i] == '.' );
        else{
            ok = false;
            break;
        }
        
    }
    if((forward == 2 && backward == 0) || (backward == 2 && forward == 0)){
        ok = true;
    }
    if (ok)
        cout << "possible" << endl;
    else
        cout << "impossible" << endl;
    
}