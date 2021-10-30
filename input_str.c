#include<stdio.h>


char* input(char *str) {
    printf(str); 
    char *x;
    scanf("%[^\n]%*c", x); 
    return x;
}

int main() {
    char *y;
    y = input("Enter Your Nsme: \n");
    printf("%s", y);
    return 0;
}

