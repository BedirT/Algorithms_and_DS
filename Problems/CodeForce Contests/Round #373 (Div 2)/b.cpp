#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n ,diff0 = 0, diff1 = 0, diff3 = 0, diff4 = 0;
	cin >> n;
	int bin[n+1], opt1[n+1], opt2[n+1];
	char c, cond = 'b';
	for(int i = 0 ; i < n; ++i){
		cin >> c;
		if(c != cond && (i%2)) diff0++;
		else if(c != cond && !(i%2))diff1++;
		else if(c == cond && !(i%2))diff3++;
		else diff4++;
		cond == 'b' ? cond = 'r' : cond = 'b';
	}
	cout << min(max(diff0 , diff1), max(diff4 , diff3)) << endl;

    return 0;
}