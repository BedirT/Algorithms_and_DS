#include<iostream>
#include<queue>
#include<vector>
#define maxNum 101
using namespace std;

vector<int> ways[maxNum];

int line[maxNum];
int n, m, a, b, i, v, u, strt;
queue<int> holder;

void BFS(){

    line[strt] = 0;
    holder.push(strt);
    
    while (!holder.empty()) {
        
        u = holder.front();
        holder.pop();
        
        for (i = 0; i < ways[u].size() ; ++i) {
            v = ways[u][i];
            if (line[v] == -1) {
                cout << v << " ";
                line[v] = line[u] + 1;
                holder.push(v);
            }
        }
    }
}

int main(){

    cin >> n >> m;
    
    for (i = 0 ; i < m ; ++i) {
        cin >> a >> b;
        ways[a].push_back(b);
        ways[b].push_back(a);
    }
    
    cin >> strt;
    
    memset(line, -1, sizeof(line));
    
    BFS();
    
    // We will print how far is the nodes to the start point
//    for (i = 0; i < n ; ++i)
//        cout << line[i] << " ";
//    cout << endl;
    
    

}