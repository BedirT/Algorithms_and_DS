#include<iostream>
#include<algorithm>
using namespace std;

int cmp (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int binSearch (int * array, int l, int h, int key) {
    
    int mid = (l+h)/2;
    
    if ( l == h ) return h;
    
    if      (array[mid] == key) return mid;
    else if (array[mid]  < key) return binSearch(array, mid+1, h, key);
    else if (array[mid]  > key) return binSearch(array, l, mid-1, key);
    
}

int main () {
    
    int i;
    int n, key; // size and key value
    
    cin >> n >> key;
    
    int array[n];
    
    for (i = 0; i < n ; i++) {
        cin >> array[i];
    }
    
    qsort(array, n, sizeof(int), cmp);
    
    cout << binSearch(array, 0, n, key) << endl;
    
}