// https://www.hackerrank.com/challenges/cpp-sets

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    set<int> st;
    for(int i = 0 ; i < q ; ++i ){
        int x,y;
        cin >> x >> y;
        if(x == 1){
            st.insert(y);
        }else if(x == 2){
            st.erase(y);
        }else{
            set<int>::iterator itr=st.find(y);
            if(itr != st.end()) cout << "Yes";
            else cout << "No";
            cout << endl;
        }
        
    }
    
    return 0;
}

