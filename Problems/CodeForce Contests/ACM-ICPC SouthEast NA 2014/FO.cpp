#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,i,j,xx;
    char s[205];
    
    cin >> n;
    while (n != 0) {
        cin >> s;
        for (i=0; i<n; i++) {
            for (xx=1, j=0; j+(n-i-1)<strlen(s); j+=n) {
                if (xx++ % 2) {
                    cout << s[j+i];
                }
                else
                    cout << s[j+(n-i-1)];
            }
        }
        cout << endl;
        cin >> n;
        
    }
}