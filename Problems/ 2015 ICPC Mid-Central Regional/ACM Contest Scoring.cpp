/*
 https://open.kattis.com/contests/auzbx7/problems/growlinggears
 */
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int a;
char b;
string s;
map<char , int > mp;
int main () {

    cin >> a;
    int total = 0, counter = 0;
    while(a != -1){
        cin >> b >> s;
        if(s == "wrong"){
            mp[b] += 20;
        }
        else{
            total += mp[b] + a;
            counter++;
        }
        cin >> a;
        
    }
    cout << counter << " " << total << endl;
   
}