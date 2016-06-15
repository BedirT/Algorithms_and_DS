#include<iostream>
#include<cstdio>
using namespace std;

struct point {
    int x, y;
};

int direction (point p1, point p2, point p3) {
    return (p2.y - p1.y) * (p3.x - p2.x) - (p3.y - p2.y) * (p2.x - p1.x);
}

bool onSeg (point P1, point P2, point P3) {
    if ( min(P1.x, P2.x) <= P3.x && P3.x <= max(P1.x, P2.x) )
        if ( min(P1.y, P2.y) <= P3.y && P3.y <= max(P1.y, P2.y) )
            return true;
    return false;
}

bool segIntersect (point p1, point p2, point p3, point p4) {
    
    int d1 = direction(p3,p4,p1); int d2 = direction(p3,p4,p2);
    int d3 = direction(p1,p2,p3); int d4 = direction(p1,p2,p4);
    
    if ( ((d1>0 && d2<0) || (d1<0 && d2>0)) && ((d3>0 && d4<0) || (d3<0 && d4>0)) )
        return true;
    else if ( d1 == 0 && onSeg(p3,p4,p1) ) return true;
    else if ( d2 == 0 && onSeg(p3,p4,p2) ) return true;
    else if ( d3 == 0 && onSeg(p1,p2,p3) ) return true;
    else if ( d4 == 0 && onSeg(p1,p2,p4) ) return true;
    else return false;
    
}

int main () {

    // We will have four point to check the lines
    // 2 for one lines edges, 2 for the other one
    point line1p1;
    point line1p2;
    point line2p1;
    point line2p2;
    
    // Inputs for points
    cin >> line1p1.x >> line1p1.y >> line1p2.x >> line1p2.y;
    cin >> line2p1.x >> line2p1.y >> line2p2.x >> line2p2.y;
    
    if ( segIntersect( line1p1, line1p2, line2p1, line2p2 ) )
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;
    
}