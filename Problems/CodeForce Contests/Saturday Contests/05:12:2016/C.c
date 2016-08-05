#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int n,i,k,sum,j,result;
int main ()
{
    scanf("%d %d",&n , &k);
    
    for (i=11*n/16; i<=n; i++) {
        j=0;
        sum=0;
        while (i/pow(k,j)>1) {
//            if(i==4){
//                printf("%f\n", i/pow(k,j));
//                printf("%d\n", sum);
//            }
            sum += i/pow(k,j);
            j++;
            if (sum >= n) {
                result = sum - i/pow(k,j-1);
                //printf("%d\n", result);
                //printf("%d\n", sum);
                break;
            }
        }if (sum >= n) {
            break;
        }
    }
    
    printf("%d", i);
    
    
}
