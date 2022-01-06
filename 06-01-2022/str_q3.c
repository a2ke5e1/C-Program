// write a program find the length of string 

#include <stdio.h>

int main()
{
    char str[10];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0; 
    while (str[len] != '\0')
    {
        len++;
    }
    printf("Length of string is: %d\n", len);
    return 0;
}

