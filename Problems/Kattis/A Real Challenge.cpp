#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
    long double n;
    cin >> n;
    n = sqrt(n);
    n *= 4;
    cout << setprecision(21) << n << endl;
}