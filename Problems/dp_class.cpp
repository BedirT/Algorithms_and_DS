/*
	Topic: Dynamic Programming
	Author: BedirT
	Question: Given integer 'n', findout in how many ways can you write
	this n using 1, 3, 4 which the choosen numbers will add up to n.

	i.e.
		input:
			n = 6
		Solutions:
			4 1 1
			3 1 1 1
			1 1 1 1 1 1
		output:
			3

*/
#include <iostream>
#define ll long long
using namespace std;
ll ar[1000];
ll res(int n){
	ll tot = 0;
	if(n == 0) return 1;
	if(n >= 1){
		if(ar[n-1]);
		else ar[n-1] = res(n-1);
		tot += ar[n-1];
	}
	if(n >= 3){
	       	if(ar[n-3]);
		else ar[n-3] = res(n-3);
		tot += ar[n-3];
	}
	if(n >= 4){
	       	if(ar[n-4]);
		else ar[n-4] = res(n-4);
		tot += ar[n-4];
	}
	return tot;
}

int main () {
	int n;
	cin >> n;
	cout << res(n) << endl;

}
