#include <stdio.h>
int main()
{

    int a = 0, b = 1, c, i, number;
    printf("Enter the number :");
    scanf("%d", &number);
    for (i = 0; i < number; i++) 
    {
        c = a + b;
        printf("%d\n", a);
        a = b;
        b = c;
    }
    return 0;
}