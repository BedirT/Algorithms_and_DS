// Given A, a sorted int array of length n. How many times does the value x occur in A.

#include<iostream>
#include<algorithm>
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
    int n, x; // size and key value
    
    cin >> n >> x;
    
    int A[n];
    
    for (i = 0; i < n ; i++) {
        cin >> A[i];
    }
    
    qsort(A, n, sizeof(int), cmp);
    
    int firstOccured = binSearch(A, 0, n, x);
    int counter = 0;
    
    for (i = firstOccured ; i < n; i++) {
        if(A[i] == x) counter++;
        else break;
    }
    for (i = firstOccured-1 ; i >= 0; i--) {
        if(A[i] == x) counter++;
        else break;
    }
    
    cout << counter << endl;
    
}