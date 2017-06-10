#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#define maxNum 101
using namespace std;

void BFS(vector<vector<int> > ways, int strt){

    queue<int> holder;
    int line[maxNum];
    memset(line, -1, sizeof line);

    line[strt] = 0;
    holder.push(strt);

    while (!holder.empty()) {
        
        int u = holder.front();
        holder.pop();
        
        for (int i = 0; i < ways[u].size() ; ++i) {
            int v = ways[u][i];
            if (line[v] == -1) {
                cout << v << " ";
                line[v] = line[u] + 1;
                holder.push(v);
            }
        }
    }
}

int main(){

    vector<vector<int> > ways;
    int line[maxNum];
    int n, m, a, b, strt;
    queue<int> holder;

    cin >> n >> m;
    
    ways.resize(n);

    for (int i = 0 ; i < m ; ++i) {
        cin >> a >> b;
        ways[a].push_back(b);
        ways[b].push_back(a);
    }
    
    cin >> strt;
    
    memset(line, -1, sizeof(line));
    
    BFS(line, holder, ways, strt);
    
    // We will print how far is the nodes to the start point
//    for (i = 0; i < n ; ++i)
//        cout << line[i] << " ";
//    cout << endl;
    
    

}