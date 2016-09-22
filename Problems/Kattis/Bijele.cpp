#include <iostream>
using namespace std;

int main (){
    int pieces[] = {1, 1, 2, 2, 2, 8};
    int a;
    for(int i = 0 ; i < 6 ; ++i){
        cin >> a;
        cout << pieces[i] - a << " ";
    }
}