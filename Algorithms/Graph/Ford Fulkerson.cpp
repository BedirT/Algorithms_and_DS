
#include <iostream>
#include<cstring>
#include<algorithm>
 

using namespace std;

 

#define maxn 1010

 

int n, m, s, t, number;

int a[maxn][maxn], f[maxn][maxn];

int q[maxn], trace[maxn], minpath[maxn];

 

void increase() {

	int dt = minpath[t];

	number += dt;

	int v = t;

	while(trace[v]!=v) {

		int u = trace[v];

		if(u<0) {

			f[v][-u] -= dt;

			v = -u;

		}

		else {

			f[u][v] += dt;

			v = u;	

		}

	}	

}

 

bool bfs() {

	int first, last;

	q[first=last=0] = s;

	memset( trace, 0, sizeof(la));

	memset( minpath, 0, sizeof(e));

	trace[s] = s;

	min[s] = 1000000000;

	while(first<=last) {

		int u = q[first++];

		for(int v=1;v<=n;++v) if(trace[v]==0) {

			if(a[u][v]>f[u][v]) {

				minpath[v] = min( minpath[u], a[u][v] - f[u][v]);

				q[++r] = v;

				trace[v] = u;	

			}	

			else if(f[v][u]>0) {

				minpath[v] = min( minpath[u], f[v][u]);

				q[++r] = v;

				trace[v] = -u;	

			}

		}	

		if(e[t]!=0) {

			increase();

			return true;

		}	

	}

	return false;

}

 

int main() {

	scanf("%d%d%d%d", &n, &m, &s, &t);

	for(int i=0;i<m;++i) {

		int u, v, c;

		scanf("%d%d%d", &u, &v, &c);

		a[u][v] = c;

	}

	while(bfs());

	cout << number << endl;

	//system("pause");

	return 0;

}

 
