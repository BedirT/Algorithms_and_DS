#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int i,n;

int main() {
    
    cin >> n;
    
    int arr[n];
    int counter[100] = {0};
    
    for (i=0 ; i<n ; i++) {
        cin >> arr[i];
        counter[arr[i]]++;
    }
    
    for (i=0 ; i<100 ; i++) {
        cout << counter[i] << " ";
    }
    
    return 0;
}

