#include <iostream>
using namespace std;
int main () {
	string s;
	cin >> s;
	
	int th = (s[1] - '0') + (s[0] - '0') * 10;
	int tm = (s[3] - '0') * 10 + (s[4] - '0');
	int it = 0;
	if (th == 24) th = 0;
	while(th < 24){
		while(tm < 60){
			int num1 = th / 10;
			int num2 = th % 10;
			int num3 = tm / 10;
			int num4 = tm % 10;
			// cout << num1 << " " << num2 << ":" << num3 << " "<< num4 << endl;
			if(num1 == num4 && num2 == num3){
				cout << it <<endl;
				exit(0);
			}
			tm++;
			it++;
		}
		th++;
		tm = 0;
		if(th == 24) {th = 0;}
	}

}