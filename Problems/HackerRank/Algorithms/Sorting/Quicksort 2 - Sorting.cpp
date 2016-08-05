// https://www.hackerrank.com/challenges/quicksort2
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int low, int high) {
    
    int pivot = arr[low];
    int next[1000], tmp = 0, i;
    
    for (i = low + 1 ; i <= high ; i++)
        if (arr[i] <= pivot)
            next[tmp++] = arr[i];
    next[tmp++] = pivot;
    
    int fin = tmp - 1 + low;
    
    for (i = low + 1 ; i <= high ; i++)
        if (arr[i] > pivot)
            next[tmp++] = arr[i];
    
    for (i = low ; i <= high ; i++)
        arr[i] = next[i - low];
    
    return fin;
}

void quickSort(int *arr, int left, int right) {
    
    if(left < right){
        
        int p = partition(arr, left, right);
        quickSort(arr, left, p-1);
        quickSort(arr, p+1, right);
        
        for (int i = left; i <= right; i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }
}

int main()
{
    int n;
    
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    quickSort(arr, 0, n - 1);
    
}