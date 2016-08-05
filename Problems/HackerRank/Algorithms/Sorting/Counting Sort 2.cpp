//https://www.hackerrank.com/challenges/countingsort2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int i;
void sort(int* arr, int n){
    
    int counter[100] = {0};
    
    for (i=0; i<n; i++)
        counter[arr[i]]++;
    
    int output = 0;
    
    for (i=0; i<100; i++)
        while ( counter[i]-- )
            arr[output++] = i;
    
    
}

int main() {
    
    int n;
    
    cin >> n;
    
    int arr[n];
    
    for(i=0;i<n;i++)
        cin >> arr[i];
    
    sort(arr, n);
    
    for(i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    
    
    return 0;
}

