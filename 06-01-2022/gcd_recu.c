// Write a function to find the GCD  & LCM of two integers using recursion.

#include <stdio.h>

int gcd_recu(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd_recu(b, a % b);
    }
}

int lcm_recu(int a, int b) {
    return (a * b) / gcd_recu(a, b);
}

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\n");

    int gcd = gcd_recu(a, b);
    int lcm = lcm_recu(a, b);

    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}