// Write a function to print Fibonacci series without using recursion.

#include <stdio.h>

void fibonacci(int);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("%d\n%d\n", a, b);
    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}