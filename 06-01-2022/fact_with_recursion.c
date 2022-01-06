// Write a function to find factorial of a number using recursion.

#include <stdio.h>

int fact(int); 

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, fact(n));
    return 0;
}

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}
