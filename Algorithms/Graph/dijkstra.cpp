// Modular Exponentiation (Power in Modular Aritmetic) (x^y)
#include <iostream>
using namespace std;

int main ()
{
	const int inf = 9999999;

	int way[1001][1001];
	int d[1001];
	int visited[1001];
	int n, m;
	cin >> n >> m;

	memset(way, -1, sizeof way);
	
	for(int i = 0; i < n; ++i){
		visited[i] = false;
		d[i] = inf;
	}

	for (int i = 0; i < m; ++i){
		int a, b, k;
		cin >> a >> b >> k;
		way[a][b] = k;
	}

	int s; cin >> s; // starting point
	d[0] = 0;

	for (int node = 0; node < n; ++node){
		for (int i = 0; i < n; ++i){
			// if(there is a way from s to n && total distance is smaller then before)
			if (way[s][i] != -1 && d[i] > d[s] + way[s][i]) // we don't even need the first condition
				d[i] = d[s] + way[s][i];
		}

		// update the node we are checking
		visited[s] = true;
		int point = inf;

		for (int i = 0; i < n; ++i){
			if (visited[i] == false && point > d[i]){
				point = d[i];
				s = i;
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << d[i] << " ";
	} cout << endl;
}
