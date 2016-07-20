#include <iostream>
using namespace std;
void insertionSort(vector <int>  ar) {
    
    int theValue = ar[ar.size()-1];
    for(int  i = ar.size()-2 ; i >= -1 ; --i){
        if(ar[i] > theValue) ar[i+1] = ar[i];
        else {
            ar[i+1] = theValue; break;
        }
        for(int j = 0 ; j < ar.size() ; ++j)
            cout << ar[j] << " ";
        cout << endl;
    }
    for(int j = 0 ; j < ar.size() ; ++j)
        cout << ar[j] << " ";
    cout << endl;
}

int main(void) {
    vector <int>  arr;
    int size;
    cin >> size;
    for(int i=0; i<size; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    
    insertionSort(arr);
    
    
    return 0;
}

