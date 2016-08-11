//http://www.spoj.com/problems/CAM5/
#include<iostream>
#include<vector>
#include<cstring>
#define maxNum 100001
using namespace std;
vector<int> roads[maxNum];
int n, e, t, a, b;
bool visited[maxNum];
int counter = 0;
void prayatna(int start){
    
    visited[start] = true;
    //cout << start << " ";
    vector<int>::iterator j;
    
    for(j = roads[start].begin(); j != roads[start].end(); ++j) {
        if(!visited[*j]) prayatna(*j);
    }
    
}
int main () {
    
    scanf("%d", &t);
    
    while (t--) {
        
        counter = 0;
        
        memset(visited, false, sizeof(visited));
        
        scanf("%d%d", &n, &e);
        
        for(int i = 0; i < e; ++i) {
            scanf("%d%d", &a, &b);
            roads[a].push_back(b);
            roads[b].push_back(a);
        }
        
        for (int i = 0 ; i < n; ++i) {
            if(!visited[i]){
                prayatna(i);
                counter++;
            }
        }
        
        printf("\n%d", counter);
        
        for(int i = 0; i < n; ++i) {
            roads[i].clear();
        }
    }
}
