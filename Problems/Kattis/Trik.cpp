#include <iostream>
using namespace std;

int main (){
    string s;
    cin >> s;
    int val = 1;
    for(int i = 0 ; i < s.size(); ++i){
        if(s[i] == 'A'){
            if(val == 1) val = 2;
            else if(val == 2) val = 1;
        }else if(s[i] == 'B'){
            if(val == 2) val = 3;
            else if(val == 3) val = 2;
        }else{
            if(val == 3) val = 1;
            else if(val == 1) val = 3;
        }
        
    }
    cout << val;
    
}