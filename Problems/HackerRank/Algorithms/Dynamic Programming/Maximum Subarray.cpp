#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--){
        
        cin >> n;
        int arr[n+2];
        int d[n];
        d[0] = 0;
        
        int allMax = 0;
        int contMax;
        int maxMin = -999999;
        for(int i = 1; i <= n; ++i){
            cin >> arr[i];
            if(i == 1)contMax = arr[1];
            d[i] = arr[i] + d[i-1];
            if(contMax < d[i]) contMax = d[i];
            if(arr[i] <= 0 && maxMin < arr[i]) maxMin = arr[i];
            if(arr[i] > 0) allMax += arr[i];
            if(contMax < arr[i]) contMax = arr[i];
        }
        
        if(allMax == 0) allMax = maxMin;
        cout << contMax << " " << allMax << endl;
        
    }
    
    return 0;
}

