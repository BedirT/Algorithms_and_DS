#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int n , a, result = 0;

int main() {
    
    cin >> n;
    vector<long int> vc;
    for(int i = 0 ; i < n ; ++i){
        cin >> a;
        vc.push_back(a);
    }
    vector<long int> d(n, 1);
    for(long int i = 1 ; i < n ; ++i){
        if(vc[i] > vc[i-1])
            d[i] = d[i-1] + 1;
    }
    
    for(long int i = n-2 ; i >= 0 ; --i)
        if(vc[i] > vc[i+1])
            d[i] = max(d[i],d[i+1] + 1);
    
    for(long int i: d)
        result += i;
    
    cout << result;
    return 0;
}