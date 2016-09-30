/*
 Dynamic Approach to LIS (Longest increasing Subsequence)
 */
#include <iostream>
using namespace std;

int main ()
{
    int n , mx = 0;
    cin >> n; // Number of elements
    int a[n+1], d[n+1];
    
    for (int i = 0 ; i < n ; ++i){
        cin >> a[i];
        d[i] = 1; // initializing the dynamic array
    }
    
    for (int i = 1 ; i < n ; ++i)
        for (int j = 0 ; j < i ; ++j)
            if (a[i] > a[j] && d[i] < d[j]+1 )
                d[i] = d[j]+1;
    
    
    for (int i = 0 ; i < n ; ++i)
        if (mx < d[i])
            mx = d[i];
    
    cout << mx << endl;
	return 0;
}
