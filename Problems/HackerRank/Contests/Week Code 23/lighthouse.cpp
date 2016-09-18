#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

char graph[53][53];
bool was[53][53];
int n, check, maxx = 0;

int bn(int x, int y){
    
    int i = 0;
    while(true){
        if (x + i < n && graph[x+i][y] == '.' && x - i >= 0 && graph[x-i][y] == '.' &&
            y + i < n && graph[x][y+i] == '.' && y - i >= 0 && graph[x][y-i] == '.')
            i++;
        else break;
    }
    return i;
}

void bfs (int i, int j, int r, int cX, int cY) {
    double lenght = sqrt((i - cX)*(i - cX) + (j - cY)*(j - cY));
    
    if (graph[i][j] != '.' && lenght<=r){
        check = -1;
        return;
    }
    
    if(   i < 0
       || i >= n
       || j < 0
       || j >= n
       || was[i][j]
       || graph[i][j] != '.'
       || lenght > r)
        return;
    
    was[i][j] = true;
    
    bfs(i-1, j, r, cX, cY);
    bfs(i+1, j, r, cX, cY);
    bfs(i, j-1, r, cX, cY);
    bfs(i, j+1, r, cX, cY);
}

int main(){
    cin >> n;
    for (int i = 0; i < n ; ++i)
        for (int  j = 0 ; j < n ; ++j)
            cin >> graph[i][j];
    
    for (int i = 0 ; i < n ; ++i)
        for (int j = 0 ; j < n ; ++j){
            if (graph[i][j] == '.'){
                
                int b = bn(i, j) - 1;
                
                check = 1;
                
                memset(was, false, sizeof(was));
                
                
                bfs(i, j, b, i, j);
                
                if (check == 1){
                    maxx = max(maxx, b);
                }
            }
        }
    
    cout << maxx << endl;
    
    return 0;
}