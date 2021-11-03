#include<stdio.h>
int main() {
    int a, b; 
    printf("Enter number a : \n"); 
    scanf("%d", &a);  
    printf("Enter number b : \n"); 
    scanf("%d", &b); 
    printf("Before Swap: a = %d , b = %d\n", a, b) ;

    a = a + b; 
    b = a - b; 
    a = a - b;
    printf("After Swap: a = %d , b = %d", a, b) ; 
    return 0; 
}