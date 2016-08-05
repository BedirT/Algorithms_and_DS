// https://www.hackerrank.com/challenges/cpp-maps
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    map<string, int> mp;
    for(int i = 0 ; i < q ; ++i){
        int x;
        cin >> x;
        int b;
        string a;
        
        if(x == 1){
            cin >> a >> b;
            if(mp.find(a) != mp.end())
                mp[a] += b;
            else mp.insert(make_pair(a, b));
            
        }else if(x == 2){
            cin >> a;
            mp.erase(a);
        }else{
            cin >> a;
            map<string, int>::iterator it = mp.find(a);
            if(it != mp.end()){
                cout << mp[a];
            }else{
                cout << "0";
            }cout << endl;
        }
    }
    return 0;
}

