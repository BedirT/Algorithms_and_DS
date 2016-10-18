/*
 O(nlogn) solution to LIS(Longest Increasing Subsequence)
 */
#include <iostream>
using namespace std;
string getWord(string ss, int i, int j){
	string ks;
	ks = ss.substr(i, j);
	return ks;
}

int main () {
	string s, s2 = "";
	getline(cin, s);
	int j = s.size();
	for(int i = s.size()-1 ; i >= 0; --i){
		if(s[i] == ' '){
			s2 += getWord(s, i+1, j);
			s2 += " ";
			j = i;
		}else if(i == 0){
			s2 += getWord(s, i, j);
		}
	}
	cout << s2 << endl;
}