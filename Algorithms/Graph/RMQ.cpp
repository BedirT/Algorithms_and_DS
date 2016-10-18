#include <iostream>
#include <cmath>
#include <cstring>
#define max(a,b) a >= b ? a : b
#define min(a,b) a <= b ? a : b
using namespace std;
void create_Tree(int * tree, int sz, char op);

int RMQ(int * tree, int L, int R){
    int ans = 0;
    
    while(L <= R){
        
        if(L % 2 == 1)
            ans += tree[L];
        
        if(R % 2 == 0)
            ans += tree[R];
        
        L = (L+1)/2;
        R = (R-1)/2;
        
    }
    
    return ans;
}

int main () {
    
    int n, sz = 1;
    cin >> n;
    int tree[1001];
    
    memset(tree, 0, sizeof tree);
    
    while (n > sz) {
        sz *= 2;
    }
    //cout << sz << endl;
    for(int i = sz; i <= sz+n-1; ++i)
        cin >> tree[i];
    
    int s, f;
    char operation; // +, -, /, *, u, d
    cin >> operation;
    create_Tree(tree, sz, operation);   // + for sum - for sub / for div * for mult
                                        // d for min u for max
    int res;
    
//    for (int i = 1; i <= sz+n-1; ++i) {
//        cout << tree[i] << " " ;
//    }cout << endl;
    if(operation == 'u') res = tree[1];
    else{
        cin >> s >> f;
        res = RMQ(tree, s+sz-1 , f+sz-1);
    }
    
    cout << res << endl;
}

// This part is unnecesary ... // Just to make it easier to write all the func. in one file
void create_Tree(int * tree, int sz, char op){
    
    if(op == '+')
        for(int i = sz-1; i >= 1; --i)
            tree[i] = tree[2*i] + tree[2*i+1];
    
    if(op == '-')
        for(int i = sz-1; i >= 1; --i)
            tree[i] = abs(tree[2*i] - tree[2*i+1]);
    
    if(op == '*')
        for(int i = sz-1; i >= 1; --i)
            tree[i] = tree[2*i] * tree[2*i+1];
    
    if(op == '/')
        for(int i = sz-1; i >= 1; --i)
            tree[i] = tree[2*i] / tree[2*i+1];
    
    if(op == 'u')
        for(int i = sz-1; i >= 1; --i)
            tree[i] = max(tree[2*i],tree[2*i+1]);
    
    if(op == 'd')
        for(int i = sz-1; i >= 1; --i)
            tree[i] = min(tree[2*i],tree[2*i+1]);
    
}
