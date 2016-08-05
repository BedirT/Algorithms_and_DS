//https://www.hackerrank.com/challenges/insertionsort2
#include <cstdio>
#include <iostream>
using namespace std;
void insertionSort(int length, int * arr){
    int j, temp;
    
    for (int i = 1; i < length; i++){
        j = i;
        
        while (j > 0 && arr[j] < arr[j-1]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        
        for(int i = 0; i < length ; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
}

int main(void) {
    
    int size;
    cin >> size;
    //scanf("%d", &size);
    int arr[size], i;
    for(i = 0; i < size; i++) {
        cin >> arr[i];
        //scanf("%d", &arr[i]);
    }
    
    insertionSort(size, arr);
    
    return 0;
}