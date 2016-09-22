#include <iostream>
using namespace std;

int main (){
    string str;
    cin >> str;
    char hold = 'X';
    for(int i = 0 ; i < str.size() ; ++i){
        if(str[i] == hold);
        else cout << str[i];
        hold = str[i];
    }
    
}