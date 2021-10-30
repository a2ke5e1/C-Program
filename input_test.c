#include<stdio.h>
int main() {
    int a, b; 
    a = input("Enter first number : \n"); 
    b = input("Enter second number : \n"); 
    printf("%d", a + b); 
    return 0;
}

int input(char *str) {
    printf(str); 
    int x; 
    scanf("%d", &x); 
    return x; 
}