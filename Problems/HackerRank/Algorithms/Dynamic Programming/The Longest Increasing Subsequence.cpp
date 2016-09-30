/*
 Longest increasing Subsequence - O(NlogN)
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
    
    vector<int> vc;
    int a;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &a);
        vc.push_back(a);
    }
    
    vector<int> last;
    
    int size = 1;
    
    last.push_back(0);
    last[0] = vc[0];
    for (vector<int>::iterator it = vc.begin()+1; it != vc.end(); ++it) {
        if (*it < last[0])
            last[0] = *it;
        else if (*it > last[size-1]){
            last.push_back(*it);
            size++;
            //            last[size++] = *it;
        }
        else
            last[binSearch(last, -1, size-1, *it)] = *it;
    }
    
    printf("%d", size);
    //cout << size << endl;
    
}