// Long arithmatic

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
    
    char str2[101], str1[101];
    int num1[101]={0}, num2[101]={0}, sum[101]={0};
    int lenghtOfSum, lenghtOfNum1, lenghtOfNum2;
    int i, x, hand=0;    

    /////////////////////////////////////////////////
    // Num's lenght //
    
    printf("Please enter your first long integer\n");
    scanf("%s", str1);
    lenghtOfNum1 = strlen(str1);
    
    printf("Please enter your second long integer\n");
    scanf("%s", str2);
    lenghtOfNum2 = strlen(str2);
    
    /////////////////////////////////////////////////
    // Num's values //
    
    for (i=0; i<lenghtOfNum1; i++ ) {
        num1[lenghtOfNum1-i-1] = str1[i] - '0';
    }

    for (i = 0 ; i<lenghtOfNum2 ; i++ ) {        
        num2[lenghtOfNum2-i-1] = str2[i] - '0';
    }
    
    /////////////////////////////////////////////////
    // SUM's Lenght //
  
    lenghtOfSum = (lenghtOfNum1 > lenghtOfNum2) ? lenghtOfNum1 : lenghtOfNum2 ;
    
    /////////////////////////////////////////////////
    // SUM's value //
    
    //printf ("sum[]:\n");
    for (i=0; i < lenghtOfSum; i++) {
        sum[i] = num1[i]+num2[i];
        //printf("%d\n",sum[i]);
    }
    
    for (i=0; i < lenghtOfSum; i++) {
        x = (sum[i]+hand)/10;
        //printf("hand = %d   ", x);
        sum[i] = (sum[i]+hand)%10;
        //printf("sum = %d\n", sum[i]);
        hand = x;
    }
    
    if (hand != 0) { 
	    sum[lenghtOfSum] = hand;
        lenghtOfSum++;
    }
    
    printf("THE SUM IS\n");
    for (i=lenghtOfSum-1; i>=0; i--) {
        printf("%d", sum[i]);
    }printf("\n");
    
    
    return 0;
}
