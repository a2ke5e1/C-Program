#include<stdio.h>
int main() {

    int a; 
    printf("Enter a number\n"); 
    scanf("%d", &a); 


    int i = 0;
    int n = a;
    do {
        n = n / 10;
        i++;
    } while (n != 0); 
    

    printf("%d\n", i);

    return 0; 
}