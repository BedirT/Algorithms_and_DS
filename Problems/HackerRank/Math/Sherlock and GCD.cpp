#include <iostream>
using namespace std;

int GCD(int a, int b){
    if(b==0) return a;
    else return GCD(b, a%b);
}

int main() {
    
    int t;
    cin >> t;
    while(t--){
        
        int n, res = 0;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n; ++i){
            cin >> arr[i];
            res = GCD(res, arr[i]);
        }
        
        if(res == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}

