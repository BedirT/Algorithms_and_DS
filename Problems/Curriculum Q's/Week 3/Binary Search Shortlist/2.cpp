#include<iostream>
#include<algorithm>
#include<cmath>
#define sz (int)sqrt(n)
using namespace std;

int cmp (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int binSearch (int * array, int l, int h, int key) {
    
    int mid = (l+h)/2;
    
    if      (array[mid] == key) return mid;
    else if (array[mid]  < key) return binSearch(array, mid+1, h, key);
    else if (array[mid]  > key) return binSearch(array, l, mid-1, key);
    else return -1;
    
}

int main () {
    
    int i;
    int n, key; // size and key value
    
    cin >> n;
    
    int array[sz];
    
    for (i = 0; i < sz ; i++) {
        array[i] = i*i*i;
    }
    
    cout << binSearch(array, 0, sz, n) << endl;
    
}