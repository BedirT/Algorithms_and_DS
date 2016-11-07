#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
string s;
int toi(char c){
	return c - '0';
}

void checker(int i){
	// cout << i << " 1 " << s << endl;
	if(i == 0){
		if(s[i] == '9'){
			s[i] = '0';
			s.insert(0, "1");
		}else{
			s[i] = (toi(s[i]) + 1) + '0';
		}
		return;
	}else{
		if(s[i] == '9'){
			s[i] = '0';
			checker(i-1);
		}else{
			s[i] = (toi(s[i]) + 1) + '0';
		}
	}
	// cout << i << " 2 " <<s << endl;
}

int main(){
	long n ,t, k = 0;
	cin >> n >> t;
	cin >> s;
	long dot = s.find('.');
	//cout << dot+1 << endl;
	for(long i = dot+1; i < s.size() && t ; ++i){
		if(toi(s[i]) >= 5){
			//cout << s[i] << " " << i << dot+1 << endl;
			if(i == dot+1){
				s.erase(s.begin()+i-1, s.end());
				checker(s.size()-1);
				break;
			}
			else{
				s.erase(s.begin()+i, s.end());
				s[s.size()-1] = (toi(s[s.size()-1]) + 1) + '0' ;
				t--;
				i -= 2;	
			}
		}
	}
	cout << s << endl;
    return 0;
}
