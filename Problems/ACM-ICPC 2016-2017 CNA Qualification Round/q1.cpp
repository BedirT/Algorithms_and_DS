#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    string str;
    getline(cin, str);
    
    for(int i = 0 ; i < str.size() ; ++i){
        if(str[i] == 'a' || str[i] == 'A')
            cout << "@";
        else if(str[i] == 'b' || str[i] == 'B')
            cout << "8";
        else if(str[i] == 'c' || str[i] == 'C')
            cout << "(";
        else if(str[i] == 'd' || str[i] == 'D')
            cout << "|)";
        else if(str[i] == 'e' || str[i] == 'E')
            cout << "3";
        else if(str[i] == 'f' || str[i] == 'F')
            cout << "#";
        else if(str[i] == 'g' || str[i] == 'G')
            cout << "6";
        else if(str[i] == 'h' || str[i] == 'H')
            cout << "[-]";
        else if(str[i] == 'i' || str[i] == 'I')
            cout << "|";
        else if(str[i] == 'j' || str[i] == 'J')
            cout << "_|";
        else if(str[i] == 'k' || str[i] == 'K')
            cout << "|<";
        else if(str[i] == 'l' || str[i] == 'L')
            cout << "1";
        else if(str[i] == 'm' || str[i] == 'M')
            cout << "[]\\/[]";
        else if(str[i] == 'n' || str[i] == 'N')
            cout << "[]\\[]";
        else if(str[i] == 'o' || str[i] == 'O')
            cout << "0";
        else if(str[i] == 'p' || str[i] == 'P')
            cout << "|D";
        else if(str[i] == 'q' || str[i] == 'Q')
            cout << "(,)";
        else if(str[i] == 'r' || str[i] == 'R')
            cout << "|Z";
        else if(str[i] == 's' || str[i] == 'S')
            cout << "$";
        else if(str[i] == 't' || str[i] == 'T')
            cout << "']['";
        else if(str[i] == 'u' || str[i] == 'U')
            cout << "|_|";
        else if(str[i] == 'v' || str[i] == 'V')
            cout << "\\/";
        else if(str[i] == 'w' || str[i] == 'W')
            cout << "\\/\\/";
        else if(str[i] == 'x' || str[i] == 'X')
            cout << "}{";
        else if(str[i] == 'y' || str[i] == 'Y')
            cout << "`/";
        else if(str[i] == 'z' || str[i] == 'Z')
            cout << "2";
        else
            cout << str[i];
    }
}