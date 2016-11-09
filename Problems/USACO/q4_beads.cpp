/*
ID: bedir.t1
PROG: beads
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main (){
    int n;
    string s;
    vector<int> vc;
    freopen("beads.in", "r", stdin);
    freopen("beads.out", "w", stdout);
    cin >> n >> s;
    for(int i = 0; i < n ; ++i){
        int total = 1;
        int j = i;
        if(s[i] == 'b'){
            while(s[j++] != 'r' && total < n){
                if(j >= n) j = 0; 
                total++;
            }
        }
        else if(s[i] == 'r'){
            while(s[j++] != 'b' && total < n){
                if(j >= n) j = 0;
                total++;
            }
        }
        else{
            char enemy = 'x';
            while(s[j] != enemy && total < n){
                if(s[j] == 'r' && enemy == 'x') enemy = 'b';
                if(s[j] == 'b' && enemy == 'x') enemy = 'r';
                j++;
                if(j >= n) j = 0;
                total++;
            }
        }
        j = i-1;
        if(i == 0) j = n-1;
        if(s[i-1] == 'b'){
            
            while(s[j--] != 'r' && total < n){
                if(j < 0) j = n-1;
                total++;
            }
            
        }
        else if(s[i-1] == 'r'){
            while(s[j--] != 'b' && total < n){
                if(j < 0) j = n-1;
                total++;
            }
        }
        else{
            char enemy = 'x';
            while(s[j] != enemy && total < n){
                if(s[j] == 'r' && enemy == 'x' ) enemy = 'b';
                if(s[j] == 'b' && enemy == 'x') enemy = 'r';
                j--;
                if(j < 0) j = n-1;
                total++;
            }
        }
        // cout << total << " ";
        if(total != n) total--;
        vc.push_back(total);
    }

    cout << *max_element(vc.begin() , vc.end()) << endl; 
}
