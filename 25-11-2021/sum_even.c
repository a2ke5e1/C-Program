#include <stdio.h>
int main()
{

    int max;
    printf("Enter a number");
    scanf("%d", &max);

    int sum = 0;

    for (int i = 1; i <= max; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum  : %d\n", sum);

    return 0;
}