#include<vector>
#include<iostream>
using namespace std;

vector<int> thisisvec[1001];

bool was[10001];
int start, finish;

void dfs(int start){
    
    was[start] = true;
    cout << start << " ";
    
    vector<int>::iterator i;
    
    //for (int i = 1; i <= ways[start].size(); ++i) {
    for (i = thisisvec[start].begin(); i != thisisvec[start].end(); ++i) {
        if (!was[*i]) {
            dfs(*i);
        }
    }
}


int main (){
    
    int city, ways, a, b;
    cin >> city >> ways;
    
    for (int i = 1; i <= ways; i++) {
        cin >> a >> b;
        thisisvec[a].push_back(b);
        thisisvec[b].push_back(a);
    }
    
    cin >> start >> finish;
    
    dfs(start);
    
}
