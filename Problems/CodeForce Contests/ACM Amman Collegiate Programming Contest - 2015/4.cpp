#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
string s;
int n, k, t, d[1001], i ,j;
int was[1001][1001], True = 1;


int main (){
    cin >>t;
    while (t--) {
        cin >> n >> k >> s;
        for (int i = 1; i <= n; ++i)
            d[i] = 1000001;
            
        for (int i = 1; i <= s.size(); ++i)
        {
            int j = 1;
            was[i][i] = True;
            bool ok = true;
            while (j < k && i + j <= n) {
                if (ok)
                {
                    if (s[i+j - 1] != s[i+j-2])
                        was[i][i+j] = 0;
                    else
                        was[i][i+j] = True,
                        ok = false;
                }
                else
                    was[i][i+j] = True;
                ++j;
            }
        }
        
        d[1] = 0;
        for (i = 2; i <= n; ++i)
            for (j = i - k+1; j <= i; ++j) {
                if (j > 1) {
                    //cout << j << " " << i << " " << (was[j][i] == True) << endl;
                    if (was[j][i] == True){
//                        cout << i << " %" << d[i] << endl;
                        d[i] = min(d[i], d[j-1] + 1);
                        //cout << i << " %" << d[i] << endl;
                        
                    }
                    }
                    if (j == 1) {
                     //  cout << j << " " << i << " " << (was[j][i] == True) << endl;
                        if (was[j][i] == True){
                           // cout << i << " " << d[i] << endl;
                            d[i] = 0;
                        }
                        
                    }
                    
                }
        True++;
//        for (int i = 0; i <= n; ++i) {
//            cout << d[i] << " " ;
//        }cout << endl;
        cout << d[n] << endl;
    }
}
