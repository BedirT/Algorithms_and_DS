#include<iostream>
#include<cstring>
using namespace std;

#define mxNUM 0x7fffffff

string T, P;

int b[mxNUM], n, m;

void kmp_pre(){
    int i = 0, j = -1; b[0] = -1;
    while (i < m) { while (j >= 0 && P[i] != P[j]) j = b[j]; i++; j++; b[i] = j; }
}

bool KMP(string sttr) {
    
    int i = 0, j = 0, y = -m;
    
    while (i < n){
        while (j >= 0 && T[i] != P[j]) j = b[j]; i++; j++;
        if (j == m) { if (y + m != i - j) return false; y = i - j; j = b[j]; }
    }
    
    if (y + m == n) return true;
    else            return false;
}

int main(){
    int x, key;
    
    cin >> T >> x;
    
    n = T.length();
    
    int counter = 0;
    while (counter < n){
        
        P += T[counter];
        m = counter + 1;
        memset(b, 0, sizeof(b));
        kmp_pre();
        if (KMP(T)){ key = m; break; }counter++;
    
    }
    
    cout << x / key << endl;
}
