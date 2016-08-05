//Binary Search
#include<iostream>
#include<algorithm>

using namespace std;
int cmp (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int binSearch(int * array, int l, int h, int key){
    
    int mid = (l+h)/2;
    if(array[mid] == key)
        return mid;
    else if(array[mid] > key)
        return binSearch(array, l, mid-1, key);
    else if(array[mid] > key)
        return binSearch(array, mid+1, h, key);
    else return -1;
    
}
int main () {
    
    int key, n;
    
    cin >> n >> key;
    
    int array[n];
    
    for (int i = 0 ; i < n ; i++)
        cin >> array[i] ;
    
    qsort(array, n, sizeof(int), cmp);
    
    cout << binSearch(array, 0, n, key);
    
    return 0;
    
}
