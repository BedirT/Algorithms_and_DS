/*
 Binary Search
 */
#include<iostream>
#include<vector>

using namespace std;

int binSearch(vector<int> v, int l, int r, int key)
{
    while (r-l > 1) {
        int m = l + (r-l)/2;
        if (v[m] >= key) r = m;
        else l = m;
    }
    return r;
}


int main ()
{
    int key, n;
    
    cin >> n >> key;
    
    vector<int> vc(n);
    
    for (int i = 0 ; i < n ; i++)
        cin >> vc[i] ;
    
    sort(vc.begin(), vc.end());
    
    cout << binSearch(vc, -1, n-1, key) << endl;
    
    return 0;
}
