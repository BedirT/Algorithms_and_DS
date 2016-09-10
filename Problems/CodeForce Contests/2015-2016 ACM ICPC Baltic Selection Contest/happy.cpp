#include<iostream>
#include<cmath>
using namespace std;

int main (){
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sad = 0, happy = 0;
    
    for (int i = 0; i < n; ++i) {
        if(i != s.length()){
            if(s[i] == ':' && s[i+1] == ')')
                happy++;
            if(s[i] == ':' && s[i+1] == '(')
                sad++;
        }
        if(i != 0){
            if(s[i] == ':' && s[i-1] == ')')
                sad++;
            if(s[i] == ':' && s[i-1] == '(')
                happy++;
        }
    }
    
    if (sad > happy) cout << "SAD" << endl;
    else if (sad < happy) cout << "HAPPY" << endl;
    else cout << "BORED" << endl;
}