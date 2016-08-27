#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<cstdio>

using namespace std;
int t, n, m, k , X ,Y;

struct Node{
    int x,y,k;
}arr[100001];
int pr[100001], sz[100001];
bool cmp(Node q, Node w){
    return q.k < w.k;
}

int dad(int x){
    if (pr[x] == x) {
        return x;
    }
    return pr[x] = dad(pr[x]);
}

int main (){
    
    scanf("%d", &t);
    
    while (t--) {
        
        scanf("%d%d", &n,&m);
        int city = n;
        int fuel = 0;
        for (int i = 0 ; i < m ; ++i)
            scanf("%d%d%d", &arr[i].x,&arr[i].y,&arr[i].k);
        
        sort(arr, arr+m, cmp);
        for (int i = 0; i < n; ++i) {
            pr[i] = i;
            sz[i] = 1;
        }
        
        for (int i = 0; i < m && city > 1; ++i) {
            X = dad(arr[i].x-1);
            Y = dad(arr[i].y-1);
            if(X != Y){
                if(sz[X] >= sz[Y]){
                    sz[X] += sz[Y];
                    pr[Y] = X;
                }
                else{
                    sz[Y] += sz[X];
                    pr[X] = Y;
                }
                --city;
                fuel = max(fuel, arr[i].k);
            }
        }
        printf("%d\n", fuel);
        
    }
}