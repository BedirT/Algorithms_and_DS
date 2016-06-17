// Jarvis’s Algorithm or Wrapping
#include<vector>
#include<iostream>
using namespace std;

struct point {
    int x, y;
};

int direction (point p1, point p2, point q) {
    
    int val = (q.x - p2.x) * (p2.y - p1.y) - (q.y - p2.y) * (p2.x - p1.x);
    
    if (val == 0) return 0;
    return (val > 0) ? 1 : 2;
    
}

void convexHull (point points[], int n) {

    if (n < 3) return;
    
    vector<point> cHull;
    
    int l = 0;
    for (int i = 1; i < n; i++)
        if (points[i].x < points[l].x)
            l = i;
    
    int p = l, q;
    do
    {
        cHull.push_back(points[p]);
        q = (p+1)%n;
        for (int i = 0; i < n; i++)
        {
            if (direction(points[p], points[i], points[q]) == 2)
                q = i;
        }
        
        p = q;
        
    } while (p != l);
    
    for (int i = 0; i < cHull.size(); i++)
        cout << "(" << cHull[i].x << ", " << cHull[i].y << ")\n";
    
}

int main () {

    point points[] = {{0, 2}, {1, 1}, {7, 3}, {5, 11},
        {11, 5}, {10, 1}, {4, 12}};
    int n = sizeof(points)/sizeof(points[0]);
    convexHull(points, n);
    
}