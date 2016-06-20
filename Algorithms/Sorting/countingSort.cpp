#include<iostream>
#define ARRAY_SIZE 10 // Size of the main array
#define MAX_NUM 10 // Max number that a number can take in the array
using namespace std;

int i;

void countingSort (int *arr) {
    
    int countingArray[MAX_NUM] = {0};
    
    for (i = 0 ; i < ARRAY_SIZE ; i++)
        countingArray[arr[i]]++;
    
    int output_Index = 0;
    
    for (i = 0 ; i < MAX_NUM ; i++)
        while ( countingArray[i]-- ) // Process will continue until the elements reach to 0
            arr[output_Index++] = i; // PS: Incrementing will be after the line_process
    
}

void print_the_array(int *array){
    
    for (i = 0 ; i < ARRAY_SIZE ; i++)
        cout << array[i] << " " ;
    cout << endl ;
    
}

int main () {
    
    int array[ARRAY_SIZE] = { 2, 5, 3, 7, 3, 9, 8, 7, 3, 1 };
    
    print_the_array (array); // Printing the first ver. of the array
    
    countingSort (array); // Sorting
    
    print_the_array (array); // We are printing the sorted array
    
}

