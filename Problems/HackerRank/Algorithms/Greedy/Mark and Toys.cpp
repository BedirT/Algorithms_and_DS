#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    sort(prices.begin(), prices.end());
    int answer = 0;
    int i = 0;
    while(k >= 0 && answer <= n){
        k = k - prices[i++];
        answer++;
    }
    
    cout << answer-1 << endl;
    
    return 0;
}

