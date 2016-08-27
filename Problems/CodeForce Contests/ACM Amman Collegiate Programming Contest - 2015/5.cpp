#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int t, n , arr[10001];
int main (){
    
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n ; ++i) {
            cin >> arr[i];
        }
        int counter = 0;
        sort(arr + 1, arr + n + 1);
        int mx = 100 - arr[n];
        for (int i = 1; i <= n ; ++i)
            if (arr[i] + mx >= 50)
                counter++;
        cout << counter << endl;
    }
}