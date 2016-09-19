#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int t, n;
int kadane(int * arr, int n){
    int cmx = arr[0], gmx = arr[0];
    for(int i = 1 ; i < n ; ++i){
        cmx = max(arr[i], arr[i]+cmx);
        if(cmx >= gmx) gmx = cmx;
    }
    return gmx; 
}

int main() {
    
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n+1];
        int maxx = 0;
        int topmin = -99999;
        for(int i = 0 ; i < n ; ++i){
            cin >> arr[i];
            if(arr[i] < 0 && topmin < arr[i]) topmin = arr[i];
            if(arr[i] >= 0) maxx += arr[i];
        }
        if(maxx == 0 && topmin != -99999) maxx = topmin;
        cout << kadane(arr, n) << " " << maxx << endl;
        
    }
    
    
    return 0;
}

