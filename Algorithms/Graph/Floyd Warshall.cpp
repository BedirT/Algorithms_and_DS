#include <iostream>
#include <map>
#define inf 0xfffffff
#define maxN 51 // Max Number of Nodes possible
using namespace std;
int ar[maxN][maxN], n, m;

int Warshall(){
	for(int i = 0; i < n; ++i) // Floyd Warshall ... o(n^3)
		for(int j = 0; j < n; ++j)
			for(int k = 0; k < n; ++k)
				ar[j][k] = min(ar[j][k], ar[j][i] + ar[i][k]);

	int res = -1;

	for(int i = 0; i < n; ++i) // Finding the max value in the distance chart
		for(int j = i+1; j < n; ++j){
			res = max(res, ar[i][j]); 
		}

	return res;
}

int main () {
	
	cin >> n >> m; // n : Number of Nodes, m : number of edges

	for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j)
            ar[i][j] = inf; // initial values as infinity..
        ar[i][i] = 0; // one node to itself costs 0...
	}

	for(int i = 0; i < m; ++i){
		cin >> a >> b >> k; 
		ar[a][b] = k; // from node a to b, cost is k
	}
	cout << "The maximum cost from any node to any other node is: ";
	cout << Warshall() << endl;
}