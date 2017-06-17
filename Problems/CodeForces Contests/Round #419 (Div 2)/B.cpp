#include <iostream>
#define maxN 200015
using namespace std;
int low[maxN], high[maxN];
int main () {
	
	int n, k, m;
	cin >> n >> k >> m;

	int a, b;
	int mx = -1, mn = 0xfffffff;

	for(int i = 0; i < n; ++i){
		cin >> a >> b;
		low[a]++;
		high[b]++;
		mx = max(mx, b);
		mn = min(mn, a);
	}

	int finRes[maxN], cur = 0, res = 0;
	for(int i = mn; i <= mx+10; ++i){
		if(low[i]) cur += low[i];
		if(cur >= 2) res++;
		finRes[i] = res;
		// cout << i << " : " << res << endl;
		if(high[i]) cur -= high[i];
	}

	while(m--){
		cin >> a >> b;
		cout << finRes[b] - finRes[a-1] << endl;
	}

}