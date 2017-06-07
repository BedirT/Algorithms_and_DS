/*
	source: http://www.geeksforgeeks.org/union-find-algorithm-set-2-union-by-rank/
	Topic: Here I implemented CYCLE DETECTION WITH UNION FIND -> (link). 
	This part I will be just adding minor improvements. To increase complexity
	from O(V) to O(logV). 
	Author: BedirT
*/
#include <iostream>
#define maxN 25 // Max number of nodes
using namespace std;

int find(int x, int * parent) {
	if (parent[x] == x) // if its parent is itself -> head of tree
        return x;
    return parent[x] = find(parent[x], parent); // go higher
}

bool detectCycle(int ar[][2], int * parent, int * rootRank, int m){ 
	// ar: array of edges | parent: array of parents | m: num of edges
	for(int i = 0; i < m; ++i){
		int x = find(ar[i][0], parent);
		int y = find(ar[i][1], parent);
		if(x == y) return true;
		
		// ADDED TO IMPROVE SOLUTION ...
		// Basically choosing which one (x, y) to connect which...
		if(rootRank[x] > rootRank[y]) parent[y] = x, rootRank[x] = rootRank[y];
		else parent[x] = y, rootRank[y] += rootRank[x];
	}
	return false;
}

int main (){
	
	int ar[maxN][2]; // array to hold vertices that have connection
	int parent[maxN];// array to hold parents
	
	int rootRank[maxN]; // A part that added to improve: we will hold the size of the elements
						// Connected to the parent of -i- (in rootRank[i])

	int n , m;

	cin >> n >> m; // n: node amount , m: edge amount

	for(int i = 0; i < m; ++i){
		int a, b;
		cin >> a >> b;
		ar[i][0] = a, ar[i][1] = b; // getting all edges in an array
	}
	for(int i = 0; i < n; ++i) parent[i] = i, rootRank[i] = 1; 	
		// Parent array initialized as
		// every node is parent of their own

	if(detectCycle(ar, parent, rootRank, m)) 
		cout << "Contains Cycle\n";
	else cout << "There is no cycle\n";

}
