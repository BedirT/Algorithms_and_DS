#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int n,m,a,i;
bool fail = false;

int cmpfunc (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main ()
{
    scanf("%d %d", &n ,&m);
    int dirty[m];
    for(i=0;i<m;i++){
        scanf("%d", &a);
        dirty[i]=a;
    }
    
    qsort(dirty, m, sizeof(int), cmpfunc);
    
    if (dirty[m-1]==n || dirty[0]==1) {
        fail = true;
    }
    
    for(i=0;i<m-1;i++){
        if(dirty[i]+1==dirty[i+1] && dirty[i+1]+1==dirty[i+2]){
            fail = true;
            break;
        }
    }
    if(fail){printf("NO");}
    else{printf("YES");}
    
	return 0;
}

//
//int n,m,a,i;
//bool fail = false;
//int main ()
//{
//    scanf("%d %d", &n ,&m);
//    bool dirty[n];
//    for(i=1;i<=n;i++){
//        dirty[i]=false;
//    }
//    for(i=0;i<m;i++){
//        scanf("%d", &a);
//        dirty[a]=true;
//    }
//    
//    if (dirty[n]==true || dirty[1]==true) {
//        fail = true;
//    }
//    
//    for(i=1;i<=n;i++){
//        //printf("%d ", i);
//        if(dirty[i+1] == true){
//            if(dirty[i+2] == true){
//                if(dirty[i+3] == true){
//                    fail = true;
//                    break;
//                }else
//                    i+=2;
//            }else
//                i++;
//        }
//    }
//    
//    if(fail){printf("NO");}
//    else{printf("YES");}
//    
//    return 0;
//}

