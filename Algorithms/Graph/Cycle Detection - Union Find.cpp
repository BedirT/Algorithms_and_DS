/*
	source: http://www.geeksforgeeks.org/union-find/
	Topic: Here I implemented CYCLE DETECTION WITH UNION FIND. Algorithm works in
	O(V) time (V for vertices). I will be adding improved version that works in 
	O(logV) time -> link(). This algorithms as the tutorial explained will not work
	for back edges.
	Author: BedirT
*/
#include <iostream>
#define maxN 25 // Max number of nodes
using namespace std;

int find(int x, int * parent) {
	if (parent[x] == x) // if its parent is itself -> head of tree
        return x;
    return find(parent[x], parent); // go higher
}

bool detectCycle(int ar[][2], int * parent, int m){ 
	// ar: array of edges | parent: array of parents | m: num of edges
	for(int i = 0; i < m; ++i){
		int x = find(ar[i][0], parent);
		int y = find(ar[i][1], parent);
		if(x == y) return true;
		parent[x] = y;
	}
	return false;
}

int main (){
	
	int ar[maxN][2]; // array to hold vertices that have connection
	int parent[maxN];// array to hold parents
	int n , m;

	cin >> n >> m; // n: node amount , m: edge amount

	for(int i = 0; i < m; ++i){
		int a, b;
		cin >> a >> b;
		ar[i][0] = a, ar[i][1] = b; // getting all edges in an array
	}
	for(int i = 0; i < n; ++i) parent[i] = i; 	// Parent array initialized as
												// every node is parent of their own

	if(detectCycle(ar, parent, m)) 
		cout << "Contains Cycle\n";
	else cout << "There is no cycle\n";

}
