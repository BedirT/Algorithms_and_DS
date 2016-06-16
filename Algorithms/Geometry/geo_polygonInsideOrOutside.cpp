#include<iostream>
#define INF 10000
using namespace std;

struct point {
  int x,y;
};

int dir (point p1, point p2, point p3) {
  
  int val = (p3.x - p2.x) * (p2.y - p1.y) - (p3.y - p2.y) * (p2.x - p1.x);

  if (val == 0) return 0;
  return (val > 0) ? 1 : 2;

}

bool onSeg (point p1, point p2, point p3) {

  if ((min(p1.x , p2.x) <= p3.x && p3.x <= max(p1.x, p2.x)) && (min(p1.y, p2.y) <= p3.y && p3.y <= max(p1.y, p2.y)) ) return true;
  return false;

}

bool doIntersect (point p1, point p2, point p3, point p4) {
  
  int d1 = dir(p3, p4, p1); int d2 = dir(p3, p4, p2);
  int d3 = dir(p1, p2, p3); int d4 = dir(p1, p2, p4);

  if (d1 != d2 && d3 != d4) return true;
  if (d1 == 0 && onSeg(p3, p4, p1)) return true;
  if (d2 == 0 && onSeg(p3, p4, p2)) return true;
  if (d3 == 0 && onSeg(p1, p2, p3)) return true;
  if (d4 == 0 && onSeg(p1, p2, p4)) return true;
  return false;

}

bool inInside ( point * polygon, int n, point p) {
  
  if ( n < 3 ) return false;

  point extreme = { INF , p.y };

  int count = 0, i = 0;

  do{

    int next = (i+1)%n;

    if(doIntersect(polygon[i], polygon[next], p, extreme)) {
      if(dir(polygon[i], p, polygon[next]) == 0) 
          return onSeg(polygon[i], p, polygon[next]); // Might be wrong I will check
      count++;
    }

    i = next;
  } while(i != 0);

  return count&1;

}

int main () {

    point Polygon[4] = {{0,0},{0,4},{4,4},{4,0}};
    int size = sizeof(Polygon)/sizeof(point);
    
    point p = {20, 20};
    inInside(Polygon, size, p) ? cout << "Yes\n" : cout << "No\n" ;
    
    point p2 = {2, 2};
    inInside(Polygon, size, p2) ? cout << "Yes\n" : cout << "No\n" ;
    

} 
