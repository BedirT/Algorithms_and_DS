#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main() {
    
    int n = 2700;
    
    int i,j;
    int was[n];
    memset(was, 0, sizeof(was));
    
    for (i = 2; i <= n; i++)
        if(was[i] == 0){
            for (j = 2*i; j <= n ; j+=i )
                was[j]++;
        }
//    
//    for(int i = 0 ; i <= 50 ; ++i)
//        cout << was[i] << " ";
//    
    int count = 0;
    j = 1;
    int arr[1001];
    memset(arr, 0, sizeof(arr));
    for (i = 30; i < 2700 && j < 1001 ; ++i)
        if (was[i] >= 3){
            arr[j++] = i;
        }
    int t;
    cin >> t;
    while(t--){
        int target;
        cin >> target;
        cout << arr[target] << endl;
    }
}