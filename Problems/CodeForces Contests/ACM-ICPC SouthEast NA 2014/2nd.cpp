#include <iostream>
#include <cstring>
using namespace std;
string s;
int d[1000];
int main()
{
    cin >> s;
    
    d[0] = 1;
    while (s[0]-'0' != 0) {
        
        for (int i = 1 ; i <= s.length() ; ++i) {
            
            if(s[i]-'0' > 0 && s[i]-'0' < 27)
            d[i] = d[i-1];
            //cout << (s[i-1]-'0')*10 + s[i]-'0' << endl;
            if((s[i-1]-'0' != 0) && (((s[i-1]-'0') * 10 + s[i]-'0') < 27) && ((s[i-1]-'0') * 10 + s[i]-'0') > 9){
                if (i-2 == -1) {
                    d[i]++;
                }
                d[i] += d[i-2];
            }
            
            //cout << i << " " << d[i] << " " << s[i] << endl;
        }
        
        cout << d[s.length()-1] << endl;
        
        cin >> s;
        
    }
}