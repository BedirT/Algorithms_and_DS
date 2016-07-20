#include<iostream>

using namespace std;

void quickSort_Lomuto(int * arr , int low, int high){
    
    if (low < high) {
        int p = partition (arr, low, high);
        quickSort_Lomuto (arr, lo, p-1);
        quickSort_Lomuto (arr, p+1, hi);
    }
    
}

int partition(int * arr, int low, int high){
    int pivot = arr[high];
    int i = low;
    for (int j = low; j < high-1; ++j) {
        if (arr[j] <= pivot){
            swap (arr[i], arr[j]);
            i++;
        }
    }
    swap (arr[i], arr[high]);
    return i;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
