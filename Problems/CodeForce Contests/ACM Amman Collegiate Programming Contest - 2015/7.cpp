#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int t, n , arr[10001], m, k , x ,y,s, a[10001], len;
bool ok = false;
int num, result, number;
int main (){
    
    cin >> t;
    while (t--) {
        cin >> n >> s;
        for (int i = 1; i <= n; ++i)
            cin >> arr[i];
        
        num= 0;
        result = 0;
        number = 0;
        for (int mask = 0; mask <= (1<<n); ++mask) {
            result = 0;
            number = 0;
            len = 0;
            for (int j = 0; j < n; ++j)
                if ((mask&(1<<j)) > 0) {
                    result += arr[j+1];
                    number++;
                    a[++len] = arr[j+1];
                }
            ok = false;
            for (int j = 1; j <= len; ++j)
                if (result - a[j] >= s) {
                    ok = true;
                    break;
                }
        
            if (!ok && result >= s)
                if (num < number)
                    num = number;
        }
        cout << num << endl;
    }
}