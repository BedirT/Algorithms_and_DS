#include<vector>
#include<iostream>

using namespace std;

vector<int> thevec[101];

int c, r, t;
bool was[1001], done;
int start;
char goal[] = {'A','L','L','I','Z','Z','W','E','L','L'};
char charr[1001];

void dfs(int start, int a){
    
    was[start] = true;
    cout << start << " ";
    
    if (a == 10) done = true;
    
    vector<int>::iterator i;
    
    for (i = thevec[start].begin(); i != thevec[start].end(); ++i) {
        if (!was[*i] && charr[*i] == goal[a]) {
            dfs(*i, a+1);
        }
    }
}


int main (){
    
    cin >> t;
    
    while (t--) {
        
        done = false;
        memset (charr, ' ', sizeof (charr));
        memset (was , false, sizeof (was));
        
        cin >> r >> c;
        
        for (int i = 1; i <= r*c; i++) {
            cin >> charr[i];
            if (charr[i] == 'A') start = i;
            if(i % c != 1) {// First Column
                thevec[i].push_back(i-1); // FC
            }
            if(i <= c*(r-1)) { // Last Row
                thevec[i].push_back(i+c); // LR
            }
            if(i > c && i % c != 0) { // FR & LC
                thevec[i].push_back(i-c+1); // LC & FR
            }
            if(i > c) { // First Row
                thevec[i].push_back(i-c); // FR
            }
            if(i % c != 0) {// Last Column
                thevec[i].push_back(i+1); // LC
            }
            if(i % c != 1 && i > c){ // FC & FR
                thevec[i].push_back(i-c-1); // FC & FR
            }
            if(i % c != 1 && i <= c*(r-1)){ // FC & LR
                thevec[i].push_back(i+c-1); // FC & LR
            }
            if(i % c != 0 && i <= c*(r-1)){
                thevec[i].push_back(i+c+1); // LC & LR
            }
        }
        
//        for (int a = 1; a < r*c; a++) {
//            for (vector<int>::iterator i = thevec[a].begin(); i != thevec[a].end(); ++i) {
//                cout << a << " " << *i << endl;
//            }
//        }
//        
        
        dfs(start, 1);
        
        if (done) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}
