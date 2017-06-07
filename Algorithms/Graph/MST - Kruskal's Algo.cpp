/*
	TOPIC: Minimum Spanning Tree solved with Kruskal's algorithm. Used union-find to
	detect cycles.
	AUTHOR: BedirT
*/
#include <iostream>
#include <vector>
#define maxN 1001
using namespace std;

int find(int x, int * parent) {
	if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x], parent);
}

bool detectCycle(int ar[][2], int * parent, int * rootRank, int i){ 
	int x = find(ar[i][0], parent);
	int y = find(ar[i][1], parent);
	if(x == y) return true;
	if(rootRank[x] > rootRank[y]) parent[y] = x, rootRank[x] = rootRank[y];
	else parent[x] = y, rootRank[y] += rootRank[x];
	return false;
}

int main (){
	
	int ar[maxN][2], parent[maxN], rootRank[maxN], n , m;

	while(cin >> n >> m && n != 0){

		vector<pair<int, pair<int, int> > > vc;

		for(int i = 0; i < m; ++i){
			int a, b, w;
			cin >> a >> b >> w;
			vc.push_back(make_pair(w ,make_pair(a, b)));
		}
		for(int i = 0; i < n; ++i) parent[i] = i, rootRank[i] = 1;

		sort(vc.begin(), vc.end());

		int pos = 0, i = 0;
		vector<int> res;
		while(pos < n - 1 && i < vc.size()){
			ar[pos][0] = vc[i].second.first;
			ar[pos++][1] = vc[i++].second.second;
			if(detectCycle(ar, parent, rootRank, pos-1)) pos--;
			else res.push_back(vc[i-1].first); // Hold the weights that we included to tree
		}

		if(pos != n-1) cout << "This is a forest\n";
		else{
			for(int i = 0; i < res.size(); ++i) // Printing the weights
				cout << res[i] << (i != res.size()-1 ? " " : "");
			cout << endl;
		}
	}
}
