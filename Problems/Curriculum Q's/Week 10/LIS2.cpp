#include <set>
#include <iostream>
#define x first
#define y second
using namespace std;
typedef pair <int, int> Point;
Point point;
int n;
set<Point> S[100001];

bool check(set<Point> &S){
    set<Point>::iterator it = S.begin();
    for (; it != S.end() ; ++it)
        if (it->x < point.x && it->y < point.y) return true;
        else if (it->x >= point.x) break;
    return false;
}

int bin_search(int L, int R){
    int mid;
    while (L < R) {
        mid = (L+R)>>1;
        if(check(S[mid]))
            L = mid+1;
        else
            R = mid;
    }
    return L;
}

int main () {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0 ; i < n; ++i) {
        cin >> point.x >> point.y;
        int id = bin_search(0, n);
        set<Point>::iterator it = ++S[id].insert(point).first;
        for (; it != S[id].end() ; ++it)
            if (it->x > point.x && it->y > point.y)
                S[id].erase(it);
    }
    int i = 0;
    while (i < n && !S[i].empty())
        i++;
    cout << i << endl;
}
