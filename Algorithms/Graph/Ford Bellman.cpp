// Ford-Bellman
#include<iostream>
#include<vector>
#define inf 0x7FFFFFFF
using namespace std;

int ** arr, sz;

struct node{
    int cost = inf, from = 0;
    bool val = false;
};

node * a;

void FBellman(){
    
    int i,j;
    
    a[0].cost = 0;
    a[0].from = 0;
    a[0].val = false;
    
    int count = sz;
    while (count--) {
        
        int min = inf;
        for (i = 0; i < sz; ++i)
            if (min > a[i].cost && !a[i].val)
                min = a[i].cost;
        
        for (i = 0; i < sz; ++i)
            if (min == a[i].cost && !a[i].val)
                break;
        
        for (j = 0; j < sz; ++j)
            if (arr[i][j] + a[i].cost < a[j].cost){
                a[j].cost = arr[i][j] + a[i].cost;
                a[j].from = i;
            }
        
        a[i].val = true;
        
    }
    
    cout << "Cost\tSource Node" << endl;
    for (int i = 0; i < sz; ++i)
        cout << a[i].cost << "\t" << a[i].from;
    
}

int main(){
    
    int n, m, f, b, c;
    cin >> n >> m;
    sz = n;
    a = new node[n];
    
    arr = new int*[n];
    for(int i = 0; i < n; ++i)
        arr[i] = new int[n];
    
    for (int i = 0 ; i < n; ++i)
        for (int j = 0 ; j < n; ++j)
            arr[i][j] = inf;
    
    while (m--) {
        cin >> f >> b >> c;
        arr[f][b] = c;
    }
    
    FBellman();
    
    
}