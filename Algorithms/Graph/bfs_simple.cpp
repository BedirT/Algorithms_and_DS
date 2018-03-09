#include <iostream>
#include <queue>
using namespace std;

int main(){

    int ways[101][101]; // 101 is the max node that I can have. (nothing special)
    int line[101];      // Just on top of my head...
    
    memset(ways, -1, sizeof(ways)); // Set every value in ways to -1
    memset(line, -1, sizeof(line)); // Set every value in line to -1

    int n, m;
    cin >> n >> m;  // n -> number of nodes | m -> number of edges
    
    for (int i = 0 ; i < m ; ++i) {
        int a, b;
        cin >> a >> b;
        ways[a][b] = 1; // Way created from a -> b
    }
    
    int strt;
    cin >> strt; // Starting node

    queue<int> holder; // Queue to hold the values
    
    line[strt] = 0; // set the distance from strt -> strt as 0 (since it is 0...)
    holder.push(strt); // put strt to the queue
    cout << strt << " "; // print the value that I am in.

    while (!holder.empty()) { // do it while my queue is not empty
        
        int u = holder.front();
        holder.pop();
        
        for (int i = 0; i < n ; ++i) {
            if (ways[u][i] != -1 && line[i] == -1) { 
                                        // Check if we already visited this node & if there
                                        // is a way from u -> i. 
                cout << i << " ";
                line[i] = line[u] + 1;  // Distance to i is one more then distance to u
                                        // since there is a way from u to i, and all ways
                                        // are, as we defined on line 19, size 1.
                holder.push(i);
            }
        }
    }

}