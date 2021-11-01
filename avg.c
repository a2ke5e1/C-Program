#include <stdio.h>
#include <stdlib.h>

/* 

    getLength(x)  = Get the number of items present in  a array. 
    

*/

#define getLength(x)  (sizeof(x) / sizeof((x)[0]))


float avg(int arr[], int len) {

    float sum = 0; 
    int i = 0; 
    for (i; i < len; i++) {
        sum += arr[i]; 
    }

    float result = sum/ len; 
    return result; 
}

int main()
{
    int array[] = { 1, 2, 3, 4, 5, 6, 10};
    printf("%f", avg(array, getLength(array)));

    char a[]  = "This is a test."; 
    printf("\nLength of String : %d", getLength(a) );
}

