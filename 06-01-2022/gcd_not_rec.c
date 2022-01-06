// Write a function to find the GCD  & LCM of two integers without recursion.

#include <stdio.h>

int gcdF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\n");

    int gcd = gcdF(a, b);
    int lcm = (a * b) / gcd;

    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}