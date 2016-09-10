#include<iostream>
#include<cmath>
using namespace std;
unsigned long long n, m;
int main (){
    
    cin >> n >> m;
    if (n > m)
        swap(n,m);
    cout << (unsigned long long)(n*(m+1));
    
}