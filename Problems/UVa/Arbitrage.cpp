#include <iostream>
#include <vector>
using namespace std;

int n;

struct arbit{		// Creating a 3D array  - 	1st dimension is for starting city,
	int path;		//						-	2nd dimension is for ending.
	double val;		//						-	3rd dimension is for length of the path.
}map[21][21][21]; 	// In struct: val is for the values that the ways are holding, path is the path we travel.

void init(){

	memset(map.val, 0, sizeof(map));
	memset(map.path, 0, sizeof(map));

	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= n ; ++j){
			if(i != j){
				cin >> map[i][j][1].val;
				map[i][j][1].path = i;
			}
			else map[i][j][1].val = 1;
		}
}

void floydWarshall(){
	for(int s = 2; s <= n ; ++s)
		for(int k = 1; k <= n ; ++k)
			for(int i = 1; i <= n; ++i)
				for(int j = 1; j <= n ; ++j)
					if(map[i][j][s].val < map[k][j][1].val * map[i][k][s-1].val){
						map[i][j][s].val = map[k][j][1].val * map[i][k][s-1].val
						map[i][j][s].path = k;
					}
}

void printRes(){

	for(int i = 1; i <= n; ++i)
		if(v.size() < map[i][i].second.size() && map[i][i].first >= 1.01)
			v = map[i][i].second;

	for(int i = 0; i < v.size() ; ++i){
		cout << v[i] << " ";
	}cout << endl;
}

int main(){

	while(cin >> n){

		init();
		floydWarshall();
		printRes();

	}
}