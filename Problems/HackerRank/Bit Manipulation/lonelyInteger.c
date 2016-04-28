//https://www.hackerrank.com/challenges/lonely-integer
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int a[1001], i, n, m;
int main() {
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d", &m);
        a[m]++;
    }
    //for(i=0;i<101;i++)
    //  if(a[i]!=0){printf("%d\n", i);}
    
    
    for(i=0;i<101;i++){
        if(a[i]%2!=0){printf("%d\n", i);break;}
    }
    
    return 0;
}