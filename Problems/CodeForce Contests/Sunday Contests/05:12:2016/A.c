#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int a,b,left,burned;
int main ()
{
    scanf("%d %d", &a ,&b);
    
    burned = a;
    
    do{
        //printf("entered\n");
        burned += a/b;
        left = a%b + a/b;
        a = left;
        
    }while(left>=b);
    
    printf("%d\n", burned);

	return 0;
}
