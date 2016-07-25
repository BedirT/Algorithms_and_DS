#include<iostream>
#include<cstring>
using namespace std;
string a ;
void swapLetters(int strt, int fin){
    
    int temp = a[strt];
    a[strt] = a[fin];
    a[fin] = temp;
    fin--;
    strt++;
    
}

int main () {
    
    cin >> a;
    int cur = -1;
    for(int i = 0 ; i < a.length() ; ++i){
        if(strcmp(&a[i], " ") == 1 && cur != -1 ){
            swapLetters(cur , i-1);
        }else if(i == a.size()-1 && cur != -1){
            swapLetters(cur , i);
        }else {
            if(cur == -1) cur = i;
        }
        
    }
    cout << a;
    
}