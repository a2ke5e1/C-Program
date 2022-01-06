#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // print reverse of string from user input
    char str[10];
    char str2[10] = "-Hello";
    printf("Enter a string: ");
    scanf("%s", str);

    // use of strcmp() function
    if (strcmp(str, str2) == 0)
    {
        printf("\nString is same.\n");
    }
    else
    {
        printf("\nString is not same.\n");
    }

    // Copy from str to str2
    printf("Before: %s\n", str2);
    strcpy(str2, str);
    printf("After: %s\n", str2);

    // print uppcase of string using toupper()
    printf("Uppercase: ");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", toupper(str[i]));
    }
    printf("\n");

    // print lowercase of string using tolower()
    printf("Lowercase: ");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", tolower(str[i]));
    }
    printf("\n");

    // use strcat.
    strcat(str, " test");
    printf("%s\n", str);

    // using strrev() function
    strrev(str);
    printf("Reverse of string is: %s\n", str);
    return 0;
}