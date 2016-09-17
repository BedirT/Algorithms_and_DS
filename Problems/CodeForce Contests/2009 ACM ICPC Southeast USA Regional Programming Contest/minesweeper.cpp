#include <iostream>
using namespace std;
int main (){
    
    int n = 1, m = 1;
    while (true) {
        cin >> n >> m;
        if (n + m == 0) exit(0);
        char arr[125][125];
        for (int i = 0 ; i < n+5; ++i) {
            for (int j = 0 ; j < m+5; ++j) {
                arr[i][j] = '-';
            }
        }
        for (int i = 1 ; i <= n; ++i) {
            for (int j = 1 ; j <= m; ++j) {
                cin >> arr[i][j];
            }
        }
        for (int i = 1 ; i <= n; ++i) {
            for (int j = 1 ; j <= m; ++j) {
                int sum = 0;
                if(arr[i][j] == '.'){
                    if(arr[i+1][j]=='*')
                        sum++;
                    if(arr[i+1][j+1]=='*')
                        sum++;
                    if(arr[i+1][j-1]=='*')
                        sum++;
                    if(arr[i-1][j]=='*')
                        sum++;
                    if(arr[i-1][j+1]=='*')
                        sum++;
                    if(arr[i-1][j-1]=='*')
                        sum++;
                    if(arr[i][j+1]=='*')
                        sum++;
                    if(arr[i][j-1]=='*')
                        sum++;
                    cout << sum;
                }
                else
                    cout << "*";
                
            }
            cout << endl;
        }
    }
    
}