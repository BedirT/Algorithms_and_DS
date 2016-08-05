#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int n,i;
int main ()
{
    scanf("%d",&n);
    int last = n;
    int first= 1;
    while(last>=first){
        if(last==first){
            printf("%d ",first);
        }else{
            printf("%d ",first);
            printf("%d ",last);
        }
        first++;
        last--;
    }
    
}
