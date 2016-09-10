#include<iostream>
#include<cmath>
using namespace std;

int main (){
    
    int n,m;
    cin >> n >> m;
    string str = "";
    int len = 0;
    while (n) {
        int x = n%10;
        int y = m%10;
        len++;
        str += '0'+abs(x-y);
        n/=10;
        m/=10;
    }
    while (str[len-1] == '0' && len>0)
        len--;
    if (len == 0)
        cout << "0";
    else
    for (;len >= 1;len--)
        cout << str[len-1];
    
}