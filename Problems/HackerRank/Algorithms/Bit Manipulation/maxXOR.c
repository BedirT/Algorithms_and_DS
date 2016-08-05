// https://www.hackerrank.com/challenges/maximizing-xor
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int max, i, j;
int maxXor(int l, int r) {
    
    for(i=l;i<=r;i++){
        for(j=l;j<=r;j++){
            if((i^j) >= max){
                max = i^j;
                //printf("%d\n",max);
            }
        }//printf("\n%d\n",max);
    }
    return max;
    
}
int main() {
    int res;
    int l;
    scanf("%d", &l);
    
    int r;
    scanf("%d", &r);
    
    res = maxXor(l, r);
    printf("%d", res);
    
    return 0;
}