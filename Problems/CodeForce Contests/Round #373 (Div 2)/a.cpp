#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n+1];
	for(int i = 0; i < n ; i++){
		cin >> arr[i];
	}
	if(arr[n-1] == 15) cout << "DOWN\n";
	else if(arr[n-1] == 0) cout << "UP\n";
	else if(n <= 1) cout << "-1\n";
	else if(arr[n-1] < arr[n-2]) cout << "DOWN\n";
	else cout << "UP\n";
    return 0;
}
