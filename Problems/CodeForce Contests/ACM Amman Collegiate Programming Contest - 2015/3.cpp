#include<iostream>
using namespace std;
string s;
int n, ans;


int main (){
    int t;
    cin >>t;
    while (t--) {
        cin >> n >> s;
        ans = 0;
        for (int i = 0; i < n; ++i) {
            if((s[i] == '.' && s[i+1] == '*') || (s[i] == '.' && i > 0 && s[i-1] == '*'))
                s[i] = 'L';
        }
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '.')
            {
                //int init = i;
                int j = i;
                while (s[j] == '.' && j < n)
                    ++j;
                j--;
                int sz = j - i + 1;
                //cout << sz << endl;
                ans += sz/3;
                //cout << sz << endl;
                if (sz%3!=0)
                    ans++;
                i = j+1;
            }
        }
        cout << ans << endl;
    }
    
    
}
