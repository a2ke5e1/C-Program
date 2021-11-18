#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    // int pX = n*2 - 1;
    // int pY = n*2 - 1;
    // for (int i = 1; i<= pY; i++ ) { 
    //     for (int j = 1; j <= pX; j++) {
    //         printf("%d", (n-i+1)> 0? (n-i+1) : (i - n + 1)); 
    //     }
    //     printf("\n"); 
    // }

    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}