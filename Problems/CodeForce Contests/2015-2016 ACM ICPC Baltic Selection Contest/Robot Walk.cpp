#include<iostream>
#include<cmath>
using namespace std;
int n, x, m;
string s, s2;
int main (){
    
    cin >> n >> x >> s;
    cin >> m >> s2;
    int pos = x-1;
    for(int i = 0 ; i < m ; ++i){
        cout << s[pos];
        if(s2[i] == 'R'){
            pos += 1;
        }else{
            pos -= 1;
        }
    }
    cout << s[pos];
}