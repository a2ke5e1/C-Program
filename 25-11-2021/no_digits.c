#include<stdio.h>
int main() {

    int a; 
    printf("Enter a number\n"); 
    scanf("%d", &a); 


    int i = 0;
    int n = a;
    while (n !=0) {
        n = n / 10;
        i++;
    }

    printf("%d\n", i);

    return 0; 
}