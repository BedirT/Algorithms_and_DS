#include <iostream>
using namespace std;
int main (){
    
    int n = 1, k =1 , m = 1;
    while (n!=0 && k!=0 && m!=0) {
        cin >> n >> m >> k;
        int arr[k];
        for (int i = 1; i <= k; ++i) {
            cin >> arr[i];
        }
        int sum = n,
        summ = n;
        int j = 1;
        for(int i = 1 ; i < m; ++i) {
            if(j > k) j = 1;
            //cout << j << " " << arr[j] << endl;
            sum += arr[j++];
            summ += sum;
        }
        if(n==0 && k==0 && m==0);
        else cout << summ << endl;
    }
    
}