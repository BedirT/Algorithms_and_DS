#include<iostream>
using namespace std;
string s;
int aX[1001], aY[1001], aZ[1001],t, result;

void update() {
    for (int i = 0; i <= 1000; ++i)
        aX[i] = aY[i] = aZ[i] = 0;
}

void doX() {
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'S')
            aX[i+1] = aX[i] + 1;
        if (s[i] == 'R')
            aX[i+1] = aX[i];
        if (s[i] == 'P')
            aX[i+1] = aX[i] - 1;
    }
}
void doY() {
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == 'R')
            aY[i+1] = aY[i] + 1;
        if (s[i] == 'P')
            aY[i+1] = aY[i];
        if (s[i] == 'S')
            aY[i+1] = aY[i] - 1;
    }
    
}
void doZ() {
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == 'P')
            aZ[i+1] = aZ[i] + 1;
        if (s[i] == 'S')
            aZ[i+1] = aZ[i];
        if (s[i] == 'R')
            aZ[i+1] = aZ[i] - 1;
    }
}

int main () {
    
    cin >> t;
    while(t--){
        int n ;
        result = 0;
        cin >> n;
        int way = 0;
        bool even = false;
        if (n % 2 == 0)
            even = true;
        else
            even = false;
        cin >> s;
        update();
        doX();
        doY();
        doZ();
//        for (int i = 1; i <= s.size(); ++i)
//        {
//            cout << aX[i] << " ";
//        }
//        cout << endl;
//        for (int i = 1; i <= s.size(); ++i)
//        {
//            cout << aY[i] << " ";
//        }
//        cout << endl;
//        for (int i = 1; i <= s.size(); ++i)
//        {
//            cout << aZ[i] << " ";
//        }
//        cout << endl;
        
        for (int x = 0; x <= 1000; ++x)
            for (int y = 0; y <= 1000; ++y) {
                if (x + y > n)
                    break;
                int z = n - x - y;
                result = 0;
                result += aX[x];
                result += aY[x+y] - aY[x];
                result += aZ[z+x+y] - aZ[x+y];
                //if (even && result > n/2)
                if (result > 0)
                    way++;
                //if (!even && result >= n/2)
            }
        cout << way << endl;
        
    }
    
}