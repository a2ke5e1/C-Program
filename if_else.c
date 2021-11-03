#include<stdio.h>
int main() {
    int a,b,c; 

    printf("Enter three numbers\n"); 
    scanf("%d %d %d", &a, &b, &c); 

    char msg[] = "Largest Number is %d"; 
    int largest_number; 
    
    if (a > b && a > c) {
       largest_number = a; 
    } else if (b>a && b>c) {
        largest_number = b; 
    } else {
        largest_number = c; 
    }

    printf(msg,largest_number); 
    return 0; 
}