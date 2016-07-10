// Given A a sorted array of distinct integers, find out an i such that A[i] == i.

#include<iostream>
#include<algorithm>
using namespace std;

int binSearch (int * array, int l, int h) {
    
    int mid = (l+h)/2;
    
    if ( l<=h) {
        if      (array[mid] == mid) return mid;
        else if (array[mid]  > mid) return binSearch(array, mid, h);
        else if (array[mid]  < mid) return binSearch(array, l, mid);
    }
    else return -1;

}

int main () {
    
    int i;
    int n; // size
    
    cin >> n;
    
    int A[n];
    
    for (i = 0; i < n ; i++) {
        cin >> A[i];
    }
    
    cout << binSearch (A, 0, n-1) << endl;
}