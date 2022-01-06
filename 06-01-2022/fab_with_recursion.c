// Write a function to print Fibonacci series using recursion.

#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci series of %d is: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}