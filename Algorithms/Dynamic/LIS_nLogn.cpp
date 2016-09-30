/*
 O(nlogn) solution to LIS(Longest Increasing Subsequence)
 */
#include <iostream>
#include <vector>
using namespace std;

int binSearch (vector<int> v, int l, int h, int key){
    while (h-l > 1) {
        int m = l + (h-l)/2;
        if (v[m] >= key) h = m;
        else l = m;
    }
    return h;
}

int main (){
    int n;
    cin >> n;
    
    vector<int> vc(n);
    for(int i = 0; i < n; ++i) cin >> vc[i];
    vector<int> last(n,0);
    
    int size = 1;
    
    last[0] = vc[0];
    for (int i = 1; i < n; ++i) {
        if (vc[i] < last[0])
            last[0] = vc[i];
        else if (vc[i] > last[size-1])
            last[size++] = vc[i];
        else
            last[binSearch(last, -1, size-1, vc[i])] = vc[i];
    }
    
    cout << size << endl;
    
}