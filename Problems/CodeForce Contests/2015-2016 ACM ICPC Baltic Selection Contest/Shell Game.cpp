#include<iostream>
#include<cmath>
using namespace std;
double r, R, h, res;
int main (){
    
    cin >> r >> R >> h;
    
    double oldH = h;
    
    h = ((r*h)/(R-r))+h;
    //cout << h << endl;
    double res = (h*R) / (sqrt(R*R + h*h) + R);
    
    if( 2 * res > oldH )
        printf("%.12lf", oldH/2);
        //cout << oldH/2;
    else
        printf("%.12lf", res);
        //cout << res;
    
}