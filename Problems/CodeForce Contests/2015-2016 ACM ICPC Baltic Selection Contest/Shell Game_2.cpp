#include<iostream>
#include<cmath>
using namespace std;
double r, R, h;
int main (){
    
    cin >> r >> R >> h;
    int f_h = h;
    double temp = (h*r)/(R-r);
    h += temp;
//    cout << h << endl;
    double side = sqrt(pow(h,2) + pow(R,2));
    
    double a = side - R;
    
    double b = h * a / (a + R) ;
    
    double k = sqrt(pow(a,2) - pow(b,2)); // Problem here
 
    double f = pow(k,2)/b;
    
    double res = sqrt(pow(f,2) + pow(k,2));
    
    if(2*res > f_h) res = f_h;
    // double k = ( a * R ) / ( a + R );
//    cout <<  << endl;
//    double res = sqrt((pow(h,2) + pow(b,2) - 2*h*b + pow(k,2))/(2*(h-b)));
  
//    double res = sqrt((pow((h-b),2) + pow(k,2))/(2*(h-b)));
//    cout << pow(a,2) + pow(res,2) << " " << pow(h,2) + pow(r,2) - 2 * h * r << endl;
//    cout << a/(a+R) << " " << b/h << endl;
//    printf("%.12lf", res);
    cout << res;
    
}