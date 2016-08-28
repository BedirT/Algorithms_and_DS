/*
 - Hackerrank World CodeSprint 6
    - Bonetrousle
 
 https://www.hackerrank.com/contests/world-codesprint-6/challenges/bonetrousle
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define pb push_back
using namespace std;
typedef long long ll;
ll n, k, f, s, rem;
int t, b;
vector<ll> v;
int main() {
    
    cin >> t;
    while(t--){
        
        cin >> n >> k >> b;
        ll div = n/b;
        rem = n%b;
        ll mx = 0;
        ll mn = 0x7fffffff;
        // b*div+rem = n
        for(int i = 0 ; i < b/2 ; ++i){
            f = div + i + 1;
            s = div - i - 1;
            mx = max(f,s);
            mn = min(f,s);
            v.pb(f);
            v.pb(s);
        }
        if(b % 2 == 1)
            v.pb(div);
        
        ll maxK = k;
        ll pos = v.size()-1;
        bool ok = true;
        sort(v.begin(), v.end());
        while(rem && pos != -1){
            if(v[pos] < maxK){
                v[pos]++;
                rem--;
            }
            else{
                pos--;
                maxK--;
            }
            if(pos == -1) ok = false;
        }
        mx = max(mx, v.front());
        if(mx > k || mn <= 0 || !ok) cout << "-1" << endl;
        else{
            
            for(vector<ll>::iterator it = v.begin() ; it != v.end() ; ++it ){
                
                if(*it == v[v.size()-1] )
                    cout << *it;
                else
                    cout << *it << " ";
            }cout << endl;
            
        }
        v.clear();
    }
    
    return 0;
}

