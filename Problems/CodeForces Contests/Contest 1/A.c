// CodeForce Contest
// http://codeforces.com/contest/629/problem/A

#include<stdio.h>

char array[101][101];
int d[101][101];
int i,j,a,n,max;
int main () {
    
    scanf("%d", &n);
    
    
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            scanf(" %c", &array[i][j]);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            if (array[i][j] == 'C'){
                a++;
            }
        max += (a * (a - 1) / 2);
        a = 0;
    }
    a = 0;
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n; ++j)
            if (array[j][i] == 'C'){
                a++;
                }
        max += (a * (a - 1) / 2);
        
        a = 0;
    }
    printf("%d", max);
}