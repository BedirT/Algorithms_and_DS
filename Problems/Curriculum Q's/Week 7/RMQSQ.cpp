#include<iostream>
#define min(a,b) a <= b ? a : b
#define inf 0x7fffffff
using namespace std;
int arr[270001];

void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int RMQ(int L, int R){
    int mn = inf;
    while (L <= R) {
        if (L % 2 == 1) {
            mn = min(mn, arr[L]);
        }
        if (R % 2 == 0) {
            mn = min(mn, arr[R]);
        }
        L = (L+1)/2;
        R = (R-1)/2;
    }
    return mn;
    
}

int main () {
    
    int n, m, s, f;
    cin >> n;
    
    int z = 1;
    while(n > z)
        z *= 2;
    
    for(int i = 0; i < 2*z; ++i){
        arr[i] = inf;
    }
    
    for (int i = z; i <= z+n-1; ++i)
        cin >> arr[i];
    
    for (int i = z-1; i >= 1; --i)
        arr[i] = min(arr[2*i], arr[2*i+1]);
    
//    for (int i = 1; i <= z+n-1; ++i) {
//                cout << arr[i] << " " ;
//            }cout << endl;
    
    cin >> m;
    while (m--){
        cin >> s >> f;
        if(s > f)
            swap(s, f);
        cout << RMQ(s+z, f+z) << endl;
    }
    
}