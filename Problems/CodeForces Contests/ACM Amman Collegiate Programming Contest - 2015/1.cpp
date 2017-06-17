#include<iostream>
using namespace std;
int t,m,k;
string s;
int main () {
    
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string lasts;
        int lastk, lastm;
        lasts = "adada";
        lastm = -1;
        lastk = 10000000;
        while(n--){
            cin >> s >> m >> k;
            if (lastm < m) {
                lasts = s;
                lastm = m;
                lastk = k;
            }else
            if (lastm == m)
                if (lastk > k) {
                    
                    lasts = s;
                    lastm = m;
                    lastk = k;
                }
        }
        cout << lasts << endl;
        
    }
    
}