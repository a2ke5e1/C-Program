#include<stdio.h>
int main() {
    int num; 
    printf("Enter a number : \n"); 
    scanf("%d", &num); 

    int rem = num%2;

    switch (rem)
    {
    case 0:
        printf("%d is a even number\n", num); 
        break;
    
    default:
        printf("%d is a odd number\n", num); 
        break;
    }

    return 0; 
}