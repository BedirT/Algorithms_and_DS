// c = Capacity , n = number of item
// Time Complexity -> O(cn)
// Space Complexity -> O(c+n)

#include <iostream>
#include <cstring>
using namespace std;
struct node{
    int w, v;
};
int main (){

    int n, c, bound;
    cin >> n; // Size
    node knap[n+5];

    for(int i = 1 ; i <= n; ++i) cin >> knap[i].w; // Weights
    for(int i = 1 ; i <= n; ++i) cin >> knap[i].v; // Values

    cin >> c; // Capacity

    bool was[c+1];
    int d[c+1];
    memset(was, 0, sizeof was);
    memset(d, 0, sizeof d);



    was[0] = true;

    for(int i = 1; i <= n; ++i){
        for(int j = c ; j >= 0 ; --j){
            if(was[j]){
                was[j + knap[i].w] = true;
                d[j + knap[i].w] = max(d[j + knap[i].w], d[j] + knap[i].v);
            }
        }
    }
    int res = 0;
    for(int i = 0 ; i <= c ; ++i)
        res = max(res, d[i]);

    cout << res << endl;
}
