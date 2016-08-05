// https://www.hackerrank.com/challenges/flipping-bits
#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
int j,n;
int main(){
    
    int32_t i;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%u", &i);
        printf("%u\n", ~i );
    }
}