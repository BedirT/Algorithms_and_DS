#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int i;
void count_sort(int* arr, int n){
    
    int counter[100] = {0};
    
    for (i=0; i<n; i++)
        counter[arr[i]]++;
    
    int output = 0;
    
    for (i=1; i< 100; i++)
        counter[i] += counter[i-1];
    
    for(i = 0 ; i < 100 ; i++)
        cout << counter[i] << " ";
    cout << endl;
    
}

int main() {
    int n;
    cin >> n; // Array's size
    int arr[n];
    string s;
    
    for(i = 0 ; i < n ; i++)
        cin >> arr[i] >> s;
    
    count_sort(arr, n);
    
    return 0;
}

